#include "pico/stdlib.h"
#include "hardware/uart.h"
#include <stdio.h>
#include <stdint.h>
#include "communication.h"


#define UART_ID uart0
#define UART_BAUD_RATE 115200
#define MAGIC_BYTE_ADDR ((uint8_t *)0x10804020)
#define MAGIC_BYTE 0xAA
#define FLASH_SECTION_MY_MAGIC  __attribute__((section(".my_magic_section")))
#define DATA_SIZE 0x20
#define FLASH_SECTION_MY_BOOTLOADER  __attribute__((section(".my_bootloader")))

int main() {
    uint8_t received_magic_byte;
    
    
    stdio_init_all();
    uart_init(UART_ID, UART_BAUD_RATE);
    gpio_set_function(0, GPIO_FUNC_UART);
    gpio_set_function(1, GPIO_FUNC_UART);

    printf("Waiting for magic byte...\n");
        sleep_ms(1500);
        *MAGIC_BYTE_ADDR = 0xAA;
        received_magic_byte = *MAGIC_BYTE_ADDR; // Belirli adresten okuma
        if (received_magic_byte == MAGIC_BYTE) {
            printf("Magic byte received, starting data transmission...\n");
            sleep_ms(500);
            read_data_from_main();
           
        }
        else {
        printf("Magic byte not matched...\n");
    }
    

    return 0;
}