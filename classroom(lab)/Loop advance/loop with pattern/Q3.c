#include<stdio.h>
#include<conio.h>
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5
void main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
