//
// Created by andrii on 5/10/22.
//

#include <stdio.h>

//enum cats c1, c2;
//enum day week_st, week_end;

void prints_all() {
    int n;
    int k;
    printf("Enter a number:");
    scanf("%d", &n);

    printf("The reversed number is:");

    while (k !=0) {

        int m = n % 10;
        k=n/10;
        n=k;

        printf("%d", m); //print the digit
    }
}