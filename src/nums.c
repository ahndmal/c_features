#include <stdio.h>


int misc1() {
    const int INPUT_SIZE = 10;
    char input[INPUT_SIZE];
    fgets(input, INPUT_SIZE, stdin);
    printf("%s\n", input);
    return 0;
}


