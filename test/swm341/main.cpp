
#include "pac_swm341.hpp"

using namespace PAC::PORTA;
using namespace PAC::PORTB;
extern "C"
int main()
{
    uint32_t v;
    v = PAC::SYS::CLKEN0::r_CLKEN0::read();
    v = PAC::PORTA::OPEND::r_OPEND::read();
    v = PAC::PORTA::OPEND::r_OPEND::read();
    v = PAC::PORTA::OPEND::r_OPEND::read_mask(PAC::PORTA::OPEND::MASK_PIN1);
    v = PAC::PORTA::OPEND::r_OPEND::read_offset(PAC::PORTA::OPEND::OFFSET_PIN10, PAC::PORTA::OPEND::WIDTH_PIN10);
    PAC::PORTA::FUNC0::r_FUNC0::write(0x01);
}
