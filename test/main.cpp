
#include "reg.hpp"

int main(void)
{
    typedef reg_t<uint32_t ,0x40000000, 0xffffffff, 0, ro_t<uint32_t>> CLKSEL_REG;
    return 0;
}
