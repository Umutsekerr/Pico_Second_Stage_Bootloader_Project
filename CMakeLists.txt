cmake_minimum_required(VERSION 3.27)

set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)
set(PICO_SDK_PATH "C:/projects/pico_bootloader/pico-sdk")

include(${PICO_SDK_PATH}/pico_sdk_init.cmake)

project(pico_bootloader)

pico_sdk_init()


add_executable(pico_bootloader
               main.c
               app.c
               memmap_custom.ld
               )


target_link_libraries(pico_bootloader 
               pico_stdlib 
               hardware_gpio 
               hardware_flash 
               hardware_uart
               )
 set_target_properties(pico_bootloader PROPERTIES PICO_TARGET_LINKER_SCRIPT
 ${CMAKE_SOURCE_DIR}/memmap_custom.ld)



pico_add_extra_outputs(pico_bootloader)

 

  

