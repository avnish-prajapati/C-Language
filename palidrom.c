#include<stdio.h>

void main ()
{
    int num,rev=0,temp; 

    printf(" Enter a number : ");
    scanf("%d",&num);

    temp=num;

    while(num>0)
    {
        int ld = num % 10;
        rev = (rev * 10) + ld;
        num=num/10;
        
    }
    
    printf("Reverse number is %d",rev );

    if (temp==rev)
    {
        printf("Number is palidrom ");
    }
    else 
    {
        printf("Number is not palidrom");
    }
}