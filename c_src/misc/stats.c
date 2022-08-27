#include <stdio.h>

void func(void) {

    static count = 10; /* global variable- static is the default */
    {
        while (count--) {
            func();
        }
    }
}

void func2(void) {
    int count;
    static i = 5;
    i++;
    printf("i is %d and count is %d\n", i, count);

}