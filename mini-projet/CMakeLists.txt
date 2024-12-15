cmake_minimum_required(VERSION 3.29)
project(mini_projet C)

set(CMAKE_C_STANDARD 99)

add_executable(mini_projet src/main.c
        src/repertoire.c
        src/include/valideSaisie.h
        src/valideSaisie.c)
