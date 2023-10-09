#ifndef COMMUNICATION_H
#define COMMUNICATION_H

extern uint8_t received_magic_byte;

void read_data_from_main(void);


#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "hardware/uart.h"
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>


#define FLASH_SECTION_MY_DATA  __attribute__((at(0x10804000)))





#endif
