cmake_minimum_required(VERSION 3.27)
project(PS C)

set(CMAKE_C_STANDARD 11)

add_executable(PS Cw1/main.c
        Cw1/C1/C1.c
        Cw1/C2/C2.c
        Cw1/C3/C3.c
        Cw1/C4/C4.c)
