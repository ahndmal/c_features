//
// Created by malandr on 27.08.22.
//
#include <stdio.h>

struct Cat {
    char name, color[10];
    int age;
};

//void get_Name() {
//    return Cat
//}


void hello_cats() {
    struct Cat murz = { "Murz", "white", 7 };
    murz.age += 1;
    printf("Cat name is %s", &murz.name);
    char name[20];
    int age;
    printf("Please enter your first name and age, separated by a space: ");
    scanf("%s %d", name, &age);
}

