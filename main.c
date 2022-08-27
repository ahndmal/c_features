/*
 * When you issue the command to compile a C program, the program is run automatically
 * through the preprocessor. The preprocessor is a program that modifies the C source program
 * according to the directives supplied in the program.
 MAX 15 nested levels of include files
 */
#include <stdio.h>
#include <syslog.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/resource.h>
#include <time.h>

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
    strcpy(cat->name, newName);
}

void init_structs() {
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

    int arr1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arr1[0] = 10;

    for (int i = 0; i < 19; ++i) {
        printf("Num is %d\n", arr1[i]);
    }

    char *str1 = "Hello there!";
    unsigned long strLength = strlen(str1);
}

void print_aster() {
    int row, i, j;
    printf("Enter the number of rows:");
    scanf("%d", &row);
    printf("\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j <= i; j++) {
            printf(" * ");
        }
        printf("\n");
    }

}

int main() {
    time_t start, end;
    double elapsed, prev_elapsed = 0.0;
    time(&start); // start timer
    do
    {
        time(&end);
        elapsed = difftime(end, start);
        if (elapsed >= prev_elapsed+1.0)
        {
            printf("green\n");
            prev_elapsed = elapsed;
        }
    } while(elapsed < 9.0);

    return 0;
}

// mallock
// callock
