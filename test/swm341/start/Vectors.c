
#include <stdint.h>
// Symbols defined by the linker script
extern uint32_t _estack;

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
	while (1) { }
}

/* Cortex-M4 core handlers */
void NMI_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void HardFault_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void MemManage_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void BusFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void UsageFault_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
void DebugMon_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

/* Peripherals handlers */
void UART1_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

typedef (*DeviceVectors)(void);

extern void Reset_Handler(void);

/* Exception Table */
__attribute__ ((section(".vectors")))
const DeviceVectors exception_table[] =
{
	/* Configure Initial Stack Pointer, using linker-generated symbols */
	(void*) (&_estack),
	(void*) Reset_Handler,
	(void*) NMI_Handler,
	(void*) HardFault_Handler,
	(void*) MemManage_Handler,
	(void*) BusFault_Handler,
	(void*) UsageFault_Handler,
	(void*) UART1_Handler   /* 45 UART */
};

// End
