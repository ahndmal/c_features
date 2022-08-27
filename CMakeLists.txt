cmake_minimum_required(VERSION 3.22)
project(c_features C)

set(CMAKE_C_STANDARD 99)
#set(CURL_LIBRARY "-lcurl")

add_executable(c_features main.c c_src/files/files_test.c c_src/misc/nums.c c_src/core/http_sock/c_http.c c_src/misc/prints.c c_src/misc/fibo.c c_src/misc/asters.c c_src/misc/student_score.c c_src/core/argv_ex2.c c_src/core/arrs_point.c c_src/core/exiting.c)
#LDFLAGS=-lcurl

find_package(PkgConfig REQUIRED)
pkg_check_modules(libcurl REQUIRED IMPORTED_TARGET libcurl>=7.17.0)
target_link_libraries(c_features PUBLIC PkgConfig::libcurl)

#find_package(CURL REQUIRED)
#add_executable (curl-demo convert.cpp)
#include_directories(${CURL_INCLUDE_DIR})
#target_link_libraries(c_features ${CURL_LIBRARIES})