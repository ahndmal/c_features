/*
 * When you issue the command to compile a C program, the program is run au-
tomatically through the preprocessor. The preprocessor is a program that modi-
fies the C source program according to the directives supplied in the program.
 MAX 15 nested levels of include files
 */
#include <stdio.h>
#include <syslog.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned char byte;

struct cat {
    int age;
    char *name;
    char *color;
};

struct dog {
    int age;
    char *name;
};

void modifyCat(struct cat *cat, char *newName) {
    strcpy(cat -> name, newName);
}

int main() {
    int age = 36;
    struct cat murzik;
    struct dog sharik;
    sharik.name = "Sharik";
//    *murzik.name = &"Murzik";
//    modifyCat(&murzik, "Murz2");
//    strcpy(murzik.name, "Murz");
    murzik.age = age;
    murzik.color = "White";
    printf("Name = %s\n", murzik.name);
    printf("Name = %s\n", sharik.name);

    char b2 = 'B';

    float ageF = 32.5F;
    long l1 = 13434434;
    char a = 'A';

    int arr1 [20] = {1,2,3,4,5,6,7,8,9};
    arr1[0] = 10;

    for (int i = 0; i < 19; ++i) {
        printf("Num is %d\n", arr1[i]);
    }

    char *str1 = "Hello there!";
    unsigned long strLength = strlen(str1);

    return 0;
}

// mallock
// callock
