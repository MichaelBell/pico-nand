#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"

#include "nand.pio.h"


int main()
{
    PIO pio = pio0;
    uint sm = 0;
    uint offset = pio_add_program(pio, &nand_program);
    nand_init(pio, sm, offset, 27, 25);

    while (1) sleep_ms(1000);

    return 0;
}
