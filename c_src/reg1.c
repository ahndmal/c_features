//
// Created by andrii on 5/10/22.
//
#include<stdio.h>

void reg2( ) {

    int binary, bin, digit, decimal = 0, base = 0;

    printf("\\n\\t Enter any binary number:");
    scanf("%d", &binary);

    bin = binary;

    while (binary != 0) {
        digit = binary % 10;
        digit = digit << base;
        decimal = decimal + digit;
        base++;
        binary = binary / 10;
    }
    printf("\\n Decimal equivalent of binary number %d = %d", bin, decimal);
}