# Toolchain dosyası - GNU Arm Embedded Toolchain için
set(CMAKE_SYSTEM_NAME "Generic")
set(CMAKE_SYSTEM_PROCESSOR "arm-none-eabi")

# Derleyici tanımları
set(CMAKE_C_COMPILER "C:/Program Files (x86)/GNU_Arm_Embedded_Toolchain/10 2021.10/bin/arm-none-eabi-gcc.exe")
set(CMAKE_CXX_COMPILER "C:/Program Files (x86)/GNU_Arm_Embedded_Toolchain/10 2021.10/bin/arm-none-eabi-g++.exe")
set(ASM_OPTIONS "C:/Program Files (x86)/GNU_Arm_Embedded_Toolchain/10 2021.10/bin/arm-none-eabi-as.exe")

# Derleyici seçenekleri ve diğer ayarlar
set(CMAKE_C_FLAGS "-mcpu=cortex-m0plus -mthumb")
set(CMAKE_CXX_FLAGS "-mcpu=cortex-m0plus -mthumb")
set(CMAKE_ASM_FLAGS "-mcpu=cortex-m0plus -mthumb")

# Derlenen kodu çalıştırılabilir bir dosyaya dönüştürmek için bağlayıcı (linker) seçenekleri
#set(CMAKE_EXE_LINKER_FLAGS "-T path/to/your/linker/script.ld -nostartfiles")

