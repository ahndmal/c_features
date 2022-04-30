//
// Created by andrii on 4/29/22.
//
#include <stdio.h>
#include <errno.h>


void writeToFile() {

    FILE *myFile = fopen("/home/andrii/docs/new-c-file.txt", "wb");
    char *string = "This is added";
    fwrite(string, 10, 1, myFile);
    fclose(myFile);

}

void readFile() {

    FILE *myFile = fopen("/home/andrii/docs/new-c-file.txt", "rb");
    char *readStr[10];
    fread(readStr, 10, 1, myFile);
    fclose(myFile);

}


