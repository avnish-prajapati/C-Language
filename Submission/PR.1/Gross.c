#include<stdio.h>
#include<conio.h>
// Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA)
void main()
{
    int gs, bs, hra, da, ta;
// Ex. Base Salary: 100 RS, HRA=10, DA=5, TA=8.

    printf("Enter bs :");
    scanf("%d", &bs);
    printf("Enter hra  :");
    scanf("%d", &hra);
    printf("Enter da :");
    scanf("%d", &da);
    printf("Enter ta :");
    scanf("%d", &ta);

    gs = bs + hra + da + ta; // sum of all cost ..

    printf("gs is %d", gs);
}
