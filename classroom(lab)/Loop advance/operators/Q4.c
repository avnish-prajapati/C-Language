#include<stdio.h>
#include<conio.h>
//WAP to find a the answer given formula (x-y)3
void main()
{
	int a,b;
	printf("Enter a num :");
	scanf("%d",&a);
	printf("Enter b num :");
	scanf("%d",&b);
	
	printf("(a-b)3=%d",(a*a*a)-3*(a*a)*b+3*a*(b*b)-(b*b*b));
}

