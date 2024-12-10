#include <stdint.h>

#define IO_WRITE(reg, val)                                    (*(volatile uint32_t *)((uint32_t)(reg)) = (uint32_t)val)

#define MMIO_BASE       0x3F000000

#define GPIO_BASE                                             (MMIO_BASE + 0x200000)
#define GPIO_SEL0                                             (GPIO_BASE + (4 * 0))
#define GPIO_SEL1                                             (GPIO_BASE + (4 * 1))
#define GPIO_SEL2                                             (GPIO_BASE + (4 * 2))
#define GPIO_SEL3                                             (GPIO_BASE + (4 * 3))
#define GPIO_SEL4                                             (GPIO_BASE + (4 * 4))
#define GPIO_SEL5                                             (GPIO_BASE + (4 * 5))
#define GPIO_SET0                                             (GPIO_BASE + 0x1C)
#define GPIO_SET1                                             (GPIO_BASE + 0x20)
#define GPIO_CLR0                                             (GPIO_BASE + 0x28)
#define GPIO_CLR1                                             (GPIO_BASE + 0x2C)
#define GPIO_LEV0                                             (GPIO_BASE + 0x34)
#define GPIO_LEV1                                             (GPIO_BASE + 0x38)
#define GPIO_GPPUD                                            (GPIO_BASE + 0x94)
#define GPIO_GPPUDCLK0                                        (GPIO_BASE + 0x98)
