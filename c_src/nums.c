#include <stdio.h>


int misc1() {
    const int INPUT_SIZE = 10;
    char input[INPUT_SIZE];
    fgets(input, INPUT_SIZE, stdin);
    printf("%s\n", input);
    return 0;
}


int counts1() {

    int counter, precount, postcount;

    counter = 10;

    precount = ++counter;

    postcount = counter++;

    printf("%d %d\\n", precount, postcount);

    counter = 50;

    postcount = counter--;

    precount = --counter;

    printf("%d %d\\n", postcount, precount);
}


void sizes() {

    printf("\n%d", sizeof(int));

    printf("\n%d", sizeof(long));
    printf("\n%d", sizeof(long));

    printf("\n%d", sizeof(float));

    printf("\n%d", sizeof(double));

    printf("\n%d", sizeof(long double));
    printf("\n%d", sizeof(char));
}

void ints3() {

    int u, v, w;

    u = 20;
    v = 30;
    w = (u > v ? u : v);

    printf("\\n Greatest out of the two is %d", w);
}

void leap_yesr() {
    int y;

    printf("\n Enter the year in four digits:");
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) printf("\n\t It is a leap year");
    else {
        printf("\n\t It is not a leap year");
    }
}
