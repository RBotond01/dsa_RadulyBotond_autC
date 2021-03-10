cmake_minimum_required(VERSION 3.17)
project(Matrix_Project C)

set(CMAKE_C_STANDARD 99)

add_executable(Matrix_Project main.c Matrix_Function.c Matrix_Function.h)