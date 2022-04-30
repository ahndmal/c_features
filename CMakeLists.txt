cmake_minimum_required(VERSION 3.22)
project(c_features C)

set(CMAKE_C_STANDARD 99)

add_executable(c_features main.c src/files_test.c src/nums.c)
