cmake_minimum_required(VERSION 3.27)
project(PS C)

set(CMAKE_C_STANDARD 11)

add_executable(PS C1/main.c
        C2/Z2.c
        C2/Z1.c
        C2/Z3.c)
