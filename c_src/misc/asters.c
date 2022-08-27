//
// Created by andrii on 5/10/22.
//


#include <stdio.h>

void asterisks_lower() {

    int n;

/* read n-number of prefect numbers you want */

    printf("Enter your n:");
    scanf("%d", &n);

    int sum, count = 0;

    for (int i = 4;; i++) {
        sum = 0;

        for (int j = 1; j <= i / 2; j++) {

            if (i % j == 0)
                sum += j;
        }

        if (sum == i) {
            printf("sum = %d", sum);
            ++count;
        }

        if (count == n)
            break;

    }

}

/*

 *
 * *
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *

 */
void asterisks2() {
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
