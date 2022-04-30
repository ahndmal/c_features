#include <stdio.h>
#include <syslog.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned char byte;

struct Cat {
    int age;
    char *name;
    char *color;
};

void modifyCat(struct Cat *cat, char *newName) {
    strcpy(cat -> name, newName);
}

int main() {
    int age = 36;

    struct Cat murzik;
//    *murzik.name = &"Murzik";
    modifyCat(&murzik, "Murz2");
    strcpy(murzik.name, "Murz");
    murzik.age = age;
    murzik.color = "White";
    printf("Name = %s", murzik.name);

    float ageF = 32.5F;
    long l1 = 13434434;
    char a = 'A';

    int arr1 [20];
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


