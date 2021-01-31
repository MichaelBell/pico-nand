# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.12)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# initalize pico_sdk from installed location
# (note this can come from environment, CMake cache etc)
set(PICO_SDK_PATH "/home/pi/pico/pico-sdk")

# Pull in Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(nand C CXX)

# Initialise the Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(nand nand.c )

pico_set_program_name(nand "nand")
pico_set_program_version(nand "0.1")

pico_generate_pio_header(nand ${CMAKE_CURRENT_LIST_DIR}/nand.pio)

pico_enable_stdio_uart(nand 1)
pico_enable_stdio_usb(nand 0)

# Add the standard library to the build
target_link_libraries(nand pico_stdlib)

# Add any user requested libraries
target_link_libraries(nand
        hardware_pio
        )

pico_add_extra_outputs(nand)

