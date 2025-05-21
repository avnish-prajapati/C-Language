#include<stdio.h>
#include<conio.h>


void main() {
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Enter a valid number between 0 to 100\n");
    }
    else if (grade >= 90) {
        printf("A+\n");
    }
    else if (grade >= 80) {
        printf("A\n");
    }
    else if (grade >= 70) {
        printf("B+\n");
    }
    else if (grade >= 60) {
        printf("B\n");
    }
    else if (grade >= 50) {
        printf("C\n");
    }
    else if (grade >= 40) {
        printf("D\n");
    }
    else {
        printf("Failed! \nNeed Improvement\n");
    }
}

