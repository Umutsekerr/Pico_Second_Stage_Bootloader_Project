#include "stdint.h"
#include "stddef.h"
#include "stdio.h"
#include "communication.h"

#define DATA_START_ADDR 0x10804000
#define DATA_SIZE 0x20
#define MAGIC_BYTE 0xAA
#define MAGIC_BYTE_ADDR ((uint8_t *)0x10804020)
#define FLASH_SECTION_MY_APP  __attribute__((section(".my_app")))

void read_data_from_main(void) {
    uint8_t received_magic_byte;
    uint8_t data[DATA_SIZE];
    sleep_ms(1000);
    uintptr_t currentAddress = DATA_START_ADDR;
    while (1) {
        for (int i = 0; i < DATA_SIZE - 6; ++i) {
            data[i] = 'a' + i;  // ASCII kodlarına göre karakterleri oluşturma
            sleep_ms(100);
            printf("%c\n", data[i]);
        currentAddress += 1;  // Bellek adresini 1 byte ilerlet
        }
        
        if (currentAddress >= DATA_START_ADDR + DATA_SIZE - 6) {
            printf("*****************************\n");
            currentAddress = DATA_START_ADDR;  // Başlangıç adresine geri dön
        }
    }
}
    
    
