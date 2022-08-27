#include <stdio.h>

void student_scores() {

    int n, numStudents,
/* number of students */
    numTests,
/* number of tests per
student*/
    score,
/* test score */
    total;
/* test scores in total
*/
    double average;
/*average test score */
    printf("TEST AVERAGING PROGRAM");
    /* read number of students */
    printf("Enter number of students:");
    scanf("%d", &n);

/* get number of test scores per student */
    printf("How many test scores per student ? ");
    scanf("%d", &numTests);

/* Calculate for each student */

    for (int student = 1; student <= numStudents; student++) {
        total = 0;
        for (int test = 1; test <= numTests; test++) {
            printf("Enter score for student ", test, student);
            scanf("%d", &score);
            total += score;
/* add score to total */
/* calculate and display the average */
            average = total / numTests;
            printf("The average score for student is", average);

        }

    }

}