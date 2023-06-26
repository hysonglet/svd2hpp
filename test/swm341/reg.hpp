#pragma once

#include <stdint.h>
#pragma GCC optimize("-Os")

#define BIT_MASK(_offset, _width)		(((0x01 << _width) - 1) << _offset)
#define BIT(idx)						(0x01 << idx)

template<typename reg_width, reg_width addr, class rw_policy>
struct reg_t
{
    inline static void write(reg_width val){
        rw_policy::write(reinterpret_cast<volatile reg_width *>(addr),
				((reg_width)0) - 1,
				0,
				val);
    }
    
    inline static reg_width read(){
        return rw_policy::read(reinterpret_cast<volatile reg_width *>(addr),
				((reg_width)0) - 1,
				0);
    }

    inline static reg_width read_mask(reg_width vmask){
        return read() | vmask;
    }

    inline static reg_width read_offset(int voffset, int width){
        return ((read() | BIT_MASK(voffset, width)) >> voffset);
    }

    inline static void set_mask(reg_width vmask){
        write(read() | vmask);
    }

    inline static void set_offset(int voffset, int width){
        write(read() | BIT_MASK(voffset, width));
    }

    inline static void clear_mask(reg_width vmask){
        write(read() & (~vmask));
    }

    inline static void clear_offset(int voffset, int width){
        write(read() & (~BIT_MASK(voffset, width)));
    }
};

template<typename reg_width, reg_width addr, reg_width mask, reg_width offset, class rw_policy>
struct field_t
{
    inline static void write(reg_width val){
        rw_policy::write(reinterpret_cast<volatile reg_width *>(addr),
				mask,
				offset,
				val);
    }
    
    inline static reg_width read(){
        return rw_policy::read(reinterpret_cast<volatile reg_width *>(addr),
				mask,
				offset);
    }
};

template<typename reg_width>
struct rw_t
{
	inline static void write(volatile reg_width *addr, 
			reg_width mask, reg_width offset, reg_width val){
        *addr = (*addr & ~(mask << offset)) | ((val & mask) << offset);
    }
    inline static reg_width read(volatile reg_width *addr, reg_width mask,
                                 reg_width offset){
        return (*addr >> offset) & mask;
    }
};

template<typename reg_width>
struct wo_t
{
    inline static void write(volatile reg_width *addr, reg_width mask,
                             reg_width offset, reg_width val){
        *addr = (*addr & ~(mask << offset)) | ((val & mask) << offset);
    }
};

template<typename reg_width>
struct ro_t
{
    inline static reg_width read(volatile reg_width *addr, reg_width mask,
                                 reg_width offset){
        return (*addr >> offset) & mask;
    }
};
