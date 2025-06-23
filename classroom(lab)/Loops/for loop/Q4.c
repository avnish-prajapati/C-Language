#include<stdio.h>
#include<conio.h>
//even to 1c
void main()
{
    int i, n;

    printf("Enter n number :");
    scanf("%d",&n);

    for (i = n; i >= 1; i--)
    {
        if (i % 2 == 0)

            printf("%d\n", i);
    }
}
