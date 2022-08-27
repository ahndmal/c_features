cmake_minimum_required(VERSION 3.22)
project(c_features C)

set(CMAKE_C_STANDARD 99)

add_executable(c_features main.c c_src/files/files_test.c c_src/misc/nums.c c_src/c_http.c c_src/misc/prints.c c_src/misc/fibo.c c_src/misc/asters.c c_src/student_score.c c_src/misc/stats.c c_src/misc/reg1.c c_src/structs/animals.c c_src/misc/printing.c c_src/core/core_time.c c_src/core/http_sock/http_sock1.c)
