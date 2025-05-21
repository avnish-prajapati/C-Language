#include<stdio.h>
#include<conio.h>

void main ()
{
	int n;
	
	printf("Enter a num :");
	scanf("%d",&n);
	
	int i = 1, sum=n;
	
	while (i<=n)
	{
		sum=sum*i;
		i*=n;
	}
	{
		printf("sum is %d" ,sum);
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
