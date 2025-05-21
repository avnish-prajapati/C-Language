#include<stdio.h>
#include<conio.h>

void main ()
{
	int start,end;
	
	printf("Enter a starting year : ");
	scanf("%d" ,&start);
	printf("Enter a ending year : ");
	scanf("%d" ,&end);
	
	while (start<=end)
	{
		if (start%4==0)
		{
			printf("%d ",start);
		}
		start++;
	}
	
	
	
	
	
	
	
}
