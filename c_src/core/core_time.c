//
// Created by malandr on 27.08.22.
//
#include <time.h>
#include <stdio.h>

void get_time() {
    time_t now = time(NULL);
    struct tm tm = *localtime(&now);
    printf("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min,
           tm.tm_sec);
}