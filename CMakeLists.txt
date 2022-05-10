cmake_minimum_required(VERSION 3.22)
project(c_features C)

set(CMAKE_C_STANDARD 99)

add_executable(c_features main.c c_src/files_test.c c_src/nums.c c_src/c_http.c c_src/prints.c c_src/fibo.c c_src/asters.c c_src/student_score.c c_src/stats.c c_src/reg1.c)
