#include <stdio.h>

void fibo1() {

    int i, n, f1, f2, f3;
    n = 12;
    /*first 12 fibonacci numbers are displayed*/

    if (n <= 1)
        printf("%d", n);
    else {
        f1 = 0;
        f2 = 1;

        f3 = f1 + f2;
        printf("%d", f3);

        for (i = 2; i <= n; i++) {

            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            printf("\t%d", f3);
        }

    }
}
