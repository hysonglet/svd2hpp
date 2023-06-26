use clap::Parser;
use std::fs::{self, File, OpenOptions};
use std::io::{Read, Write};

use svd::svd::{RegisterInfo};
use svd::svd::{
    MaybeArray,
    Name,RegisterCluster,
};
use svd_parser as svd;

#[derive(Parser, Debug)]
#[command(author="hysonglet", version="0.1.0", about="pack svd to hpp", long_about = None)]
struct Cli {
    // SVD 文件
    #[arg(short)]
    svd: String,
}

#[derive(Debug)]
struct HppFile {
    tab_cnt: i32,
    file: File,
}

enum TabIdent {
    Keep,
    Inc,
    Dec,
}

impl HppFile {
    pub fn new(file_name: &str) -> Self {
        HppFile {
            tab_cnt: 0,
            file: {
                OpenOptions::new()
                    .write(true)
                    .truncate(true)
                    .create(true)
                    .open(file_name)
                    .unwrap_or_else(|e| {
                        panic!("{}", e.to_string());
                    })
            },
        }
    }

    fn append_str(&mut self, content: &str) {
        self.file.write(content.as_bytes()).unwrap();
    }

    fn tab_set(&mut self, tab_ident: TabIdent) {
        self.tab_cnt += match tab_ident {
            TabIdent::Keep => 0,
            TabIdent::Dec => -1,
            TabIdent::Inc => 1,
        };
        if self.tab_cnt < 0 {
            self.tab_cnt = 0
        }
    }

    fn appent_tabs(&mut self) {
        for _i in 0..self.tab_cnt {
            self.append_str("    ");
        }
    }

    pub fn append_str_line_with_tab(
        &mut self,
        coutent: &str,
        pre_tab: TabIdent,
        sub_tab: TabIdent,
    ) {
        self.tab_set(pre_tab);

        self.appent_tabs();

        self.append_str(coutent);
        self.append_str("\n");

        self.tab_set(sub_tab);
    }

    pub fn append_param_once(&mut self) {
        self.append_line("#pragma once");
    }

    pub fn append_namespace(&mut self, namespace: &str) {
        // let namespace = namespace.to_uppercase();
        let s = format!("namespace {namespace} {{");
        self.append_str_line_with_tab(&s, TabIdent::Keep, TabIdent::Inc);
    }

    pub fn append_end_bracket(&mut self, comment: &str) {
        let s = format!("}} // {comment}");
        self.append_str_line_with_tab(&s, TabIdent::Dec, TabIdent::Keep);
    }

    pub fn append_comment(&mut self, comment: &str) {
        let s = format!("// {comment}");
        self.append_str_line_with_tab(&s, TabIdent::Keep, TabIdent::Keep);
    }

    pub fn append_line(&mut self, string: &str) {
        self.append_str_line_with_tab(string, TabIdent::Keep, TabIdent::Keep);
    }

    pub fn append_periph_macro(&mut self, periph: &str) {
        let periph = periph.to_uppercase();
        let s = format!("#if ((defined USING_{periph}) && (USING_{periph} != 0))");
        self.append_str_line_with_tab(&s, TabIdent::Dec, TabIdent::Keep);
    }

    pub fn apppend_periph_end_macro(&mut self, comment: &str) {
        let s = format!("#endif // {comment}");
        self.append_str_line_with_tab(&s, TabIdent::Dec, TabIdent::Keep);
    }

    pub fn append_include(&mut self, header: &str) {
        let s = format!("#include \"{header}\"");
        self.append_str_line_with_tab(&s, TabIdent::Dec, TabIdent::Keep);
    }
}

fn main() {
    let cli = Cli::parse();
    let mcu_file = cli.svd;

    let xml = &mut String::new();
    _ = File::open(&mcu_file)
        .unwrap_or_else(|e| {
            panic!("{}", e.to_string());
        })
        .read_to_string(xml)
        .unwrap_or_else(|e| {
            panic!("{}", e.to_string());
        });

    let device = svd::parse(xml).unwrap();

    let device_dir_name = format!("{}", device.name().to_lowercase());
    let _ = fs::create_dir_all(&device_dir_name).unwrap_or_else(|e| {
        panic!("{}", e.to_string());
    });

    let device_hpp_name = device.name.to_lowercase() + ".hpp";
    let device_hpp = format!("{}/pac_{}", &device_dir_name, &device_hpp_name);

    let mut dev_hpp = HppFile::new(&device_hpp);
    dev_hpp.append_param_once();

    let config_hpp = format!("{device_dir_name}/pac_config.h");
    let mut config_hpp = HppFile::new(&config_hpp);
    config_hpp.append_param_once();
    config_hpp.append_include("usr_config.h");

    // 遍历所有外设
    for peripheral in &device.peripherals {
        // 打印遍历进度
        println!("pack [{}]", peripheral.name());
        let peripheral_hfile_name = format!(
            "{}/{}.hpp",
            &device_dir_name,
            peripheral.name().to_lowercase()
        );

        dev_hpp.append_include(format!("{}.hpp", peripheral.name().to_lowercase()).as_str());

        // 创建外设hpp文件
        let mut peripheral_hfile = HppFile::new(&peripheral_hfile_name);

        // 添加头文件保护 #param once
        peripheral_hfile.append_param_once();
        peripheral_hfile.append_include("reg.hpp");
        peripheral_hfile.append_include("pac_config.h");

        peripheral_hfile.append_periph_macro(&peripheral.name());
        peripheral_hfile.append_namespace("PAC");
        // 添加外设名命名空间
        peripheral_hfile.append_namespace(&peripheral.name().to_uppercase());

        let macro_name = format!("USING_{}", peripheral.name().to_uppercase());
        let code = format!("#ifndef {macro_name}\n#define {macro_name}  0\n#endif");
        config_hpp.append_line(&code);

        let peripheral_base_addr = peripheral.base_address;
        // 当前外设为 derived 类型
        let peripheral = if let Some(derived_from) = &peripheral.derived_from {
            device.get_peripheral(derived_from).unwrap()
        } else {
            peripheral
        };
        // 遍历寄存器
        if let Some(registers) = &peripheral.registers {
            for registercluster in registers {
                let mut register_name = registercluster.name().to_uppercase();
                register_name = if register_name.contains("[%S]") {
                    // register_name.remove_matches("[%s]");
                    register_name[0..register_name.len() - 4].to_string()
                } else {
                    register_name
                };
                // 添加寄存器的命名空间
                peripheral_hfile.append_namespace(&register_name);

                let register_addr = peripheral_base_addr + registercluster.address_offset() as u64;

                // 获取寄存器的读写类型
                let acc_rw_policy = |acc: svd::svd::Access| -> &str {
                    match acc {
                        svd::svd::Access::ReadOnly => "ro_t",
                        svd::svd::Access::WriteOnly => "wo_t",
                        svd::svd::Access::ReadWrite => "rw_t",
                        a => {
                            panic!("acccess: {:?}", a);
                        }
                    }
                };

                // 获取寄存器的宽度类型
                let register_width = |ow: Option<u32>| -> (&str, u32) {
                    if let Some(w) = ow {
                        match w {
                            8 => ("uint8_t", 8),
                            16 => ("uint16_t", 16),
                            32 => ("uint32_t", 32),
                            64 => ("uint64_t", 64),
                            w => {
                                panic!("error register size: {}", w);
                            }
                        }
                    } else {
                        ("uint32_t", 32)
                    }
                };

                // 生成寄存器接口
                let register_code_write =
                    |register_width_type: &str,
                     register_addr: u64,
                     rw_policy: &str,
                     register_name: &str,
                     peripheral_hfile: &mut HppFile| {
                        let code = format!("typedef reg_t<{register_width_type}, 0x{:x}, {rw_policy}<{register_width_type}>> {};", 
                                                                register_addr,
                                                                register_name);
                        peripheral_hfile.append_str_line_with_tab(
                            &code,
                            TabIdent::Keep,
                            TabIdent::Keep,
                        );
                    };
                // 生成寄存器filed接口
                let register_field_code_write =
                    |register_width_type: &str,
                     register_addr: u64,
                     register_width: u32,
                     bit_offset: u32,
                     rw_policy: &str,
                     register_name: &str,
                     peripheral_hfile: &mut HppFile| {
                        let code = format!("typedef field_t<{register_width_type}, 0x{:x}, 0x{:x}, {bit_offset}, {rw_policy}<{register_width_type}>> {};", 
                                                                register_addr, ((0x01u64 << register_width) - 1),
                                                                register_name);
                        peripheral_hfile.append_str_line_with_tab(
                            &code,
                            TabIdent::Keep,
                            TabIdent::Keep,
                        );
                    };

                // 解析field
                let register_field_write =
                    |register: &RegisterInfo,
                     register_addr: u64,
                     peripheral_hfile: &mut HppFile| {
                        let fields = &register.fields;
                        // mask
                        if let Some(field_info) = fields {
                            let mask_code = format!("enum mask_t{{");
                            peripheral_hfile.append_str_line_with_tab(
                                &mask_code,
                                TabIdent::Keep,
                                TabIdent::Inc,
                            );

                            for field in field_info {
                                let code = format!(
                                    "MASK_{:10} = 0x{:08x},",
                                    field.name().to_uppercase(),
                                    (0x01 << field.bit_width() - 1) << field.bit_offset()
                                );
                                peripheral_hfile.append_str_line_with_tab(
                                    &code,
                                    TabIdent::Keep,
                                    TabIdent::Keep,
                                );
                            }

                            let code = format!("}}; // endof mask_t");
                            peripheral_hfile.append_str_line_with_tab(
                                &code,
                                TabIdent::Dec,
                                TabIdent::Keep,
                            );
                        }

                        // offset
                        if let Some(field_info) = fields {
                            let mask_code = format!("enum offset_t{{");
                            peripheral_hfile.append_str_line_with_tab(
                                &mask_code,
                                TabIdent::Keep,
                                TabIdent::Inc,
                            );

                            for field in field_info {
                                let code = format!(
                                    "OFFSET_{:10} = {},",
                                    field.name().to_uppercase(),
                                    field.bit_offset()
                                );
                                peripheral_hfile.append_str_line_with_tab(
                                    &code,
                                    TabIdent::Keep,
                                    TabIdent::Keep,
                                );
                            }

                            let code = format!("}}; // endof offset_t");
                            peripheral_hfile.append_str_line_with_tab(
                                &code,
                                TabIdent::Dec,
                                TabIdent::Keep,
                            );
                        }
                        // width
                        if let Some(field_info) = fields {
                            let mask_code = format!("enum width_t{{");
                            peripheral_hfile.append_str_line_with_tab(
                                &mask_code,
                                TabIdent::Keep,
                                TabIdent::Inc,
                            );

                            for field in field_info {
                                let code = format!(
                                    "WIDTH_{:10} = {},",
                                    field.name().to_uppercase(),
                                    field.bit_width()
                                );
                                peripheral_hfile.append_str_line_with_tab(
                                    &code,
                                    TabIdent::Keep,
                                    TabIdent::Keep,
                                );
                            }

                            let code = format!("}}; // endof width_t",);
                            peripheral_hfile.append_str_line_with_tab(
                                &code,
                                TabIdent::Dec,
                                TabIdent::Keep,
                            );
                        }
                        // enum
                        if let Some(field_info) = fields {
                            for field in field_info {
                                let enumeratedvalue = &field.enumerated_values;
                                for v in enumeratedvalue {
                                    let code = format!(
                                        "enum {}_t: uint32_t{{",
                                        field.name().to_uppercase()
                                    );
                                    peripheral_hfile.append_str_line_with_tab(
                                        &code,
                                        TabIdent::Keep,
                                        TabIdent::Inc,
                                    );
                                    for x in &v.values {
                                        // println!("{} = {}", x.name(), x.value.unwrap());
                                        let desc = x.description.clone().unwrap_or("".to_string());
                                        let code = format!(
                                            "{:10} = {}, // {}",
                                            x.name,
                                            x.value.unwrap_or(0),
                                            desc
                                        );
                                        peripheral_hfile.append_str_line_with_tab(
                                            &code,
                                            TabIdent::Keep,
                                            TabIdent::Keep,
                                        );
                                    }
                                    let code =
                                        format!("}}; // endof {}_t", field.name().to_uppercase());
                                    peripheral_hfile.append_str_line_with_tab(
                                        &code,
                                        TabIdent::Dec,
                                        TabIdent::Keep,
                                    );
                                }
                            }
                        }
                        // reg
                        if let Some(field_info) = fields {
                            for field in field_info {
                                if let Some(acc) = field.access {
                                    peripheral_hfile.append_comment(
                                        field
                                            .description
                                            .clone()
                                            .unwrap_or("".to_string())
                                            .as_str(),
                                    );
                                    let field_name = format!("f_{}", field.name().to_uppercase());
                                    let rw_policy = acc_rw_policy(acc);
                                    let (register_width_type, _) =
                                        register_width(register.properties.size);

                                    // 写入rw接口
                                    register_field_code_write(
                                        register_width_type,
                                        register_addr,
                                        field.bit_width(),
                                        field.bit_offset(),
                                        rw_policy,
                                        &field_name,
                                        peripheral_hfile,
                                    );
                                }
                            }
                        }
                    };
                let commit = registercluster
                    .description()
                    .clone()
                    .unwrap_or("".to_string());
                peripheral_hfile.append_comment(&commit);
                match registercluster {
                    // 该字段为普通寄存器内容
                    RegisterCluster::Register(register) => {
                        match register {
                            // 寄存器类型为数组类型
                            MaybeArray::Array(register, dim) => {
                                if let Some(acc) = register.properties.access {
                                    let rw_policy = acc_rw_policy(acc);
                                    let (register_width_type, _) =
                                        register_width(register.properties.size);

                                    for idx in 0..dim.dim {
                                        let register_addr =
                                            register_addr + idx as u64 * (dim.dim_increment as u64);
                                        let reg_name = format!("r_{}_{idx}", &register_name);

                                        register_code_write(
                                            register_width_type,
                                            register_addr,
                                            rw_policy,
                                            &reg_name,
                                            &mut peripheral_hfile,
                                        );
                                    }
                                }
                            }
                            // 寄存器为单个寄存器类型
                            MaybeArray::Single(register) => {
                                if let Some(acc) = register.properties.access {
                                    let rw_policy = acc_rw_policy(acc);
                                    let (register_width_type, _) =
                                        register_width(register.properties.size);
                                    let reg_name = format!("r_{}", &register_name);

                                    register_code_write(
                                        register_width_type,
                                        register_addr,
                                        rw_policy,
                                        &reg_name,
                                        &mut peripheral_hfile,
                                    );
                                    register_field_write(
                                        register,
                                        register_addr,
                                        &mut peripheral_hfile,
                                    );
                                }
                            }
                        }
                    }
                    // cluster 类型
                    RegisterCluster::Cluster(cluster) => {
                        let cluster_addr = register_addr;
                        //  遍历当前cluster 中所有的寄存器
                        for register in cluster.registers() {
                            let register_name = register.name.as_str();
                            // 添加寄存器的命名空间
                            peripheral_hfile.append_namespace(&register_name.to_uppercase());
                            // 如果有权限字段，则生成继续解析生成接口
                            if let Some(acc) = register.properties.access {
                                let rw_policy = acc_rw_policy(acc);
                                let (register_width_type, _) =
                                    register_width(register.properties.size);
                                let register_addr = cluster_addr + register.address_offset as u64;
                                let reg_name = format!("r_{}", &register_name);

                                register_code_write(
                                    register_width_type,
                                    register_addr,
                                    rw_policy,
                                    &reg_name,
                                    &mut peripheral_hfile,
                                );
                            }
                            // 添加寄存器命名控件的结束符号
                            let commit = format!("end of {}", register_name.to_uppercase());
                            peripheral_hfile.append_end_bracket(&commit);
                        }
                    }
                }

                // 添加寄存器命名空间的结束符号
                let commit = format!("end of {}", registercluster.name());
                peripheral_hfile.append_end_bracket(&commit);
            }
        }
        // 添加外设命名空间的结束符号
        let commit = format!("end of {}", peripheral.name());
        peripheral_hfile.append_end_bracket(&commit);
        let commit = format!("end of PAC");
        peripheral_hfile.append_end_bracket(&commit);
        let commit = format!("end of #if USING_{}", peripheral.name());
        peripheral_hfile.apppend_periph_end_macro(&commit);
    }
}
