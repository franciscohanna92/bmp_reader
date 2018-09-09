cmake_minimum_required(VERSION 3.12)
project(bmp_reader C)

set(CMAKE_C_STANDARD 99)

add_executable(bmp_reader main.c lib/bmp_reader_methods.c lib/bmp_reader_methods.h lib/bmp_reader_types.h)