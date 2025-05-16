#include<stdio.h>
#include<conio.h>
//31, 29, 24, 22, 17,    -2 , -7

void main ()
{
	int i, x=31;
	for(i=1; i<=10; i++)
	{
		printf("%d ",x);
		if(i%2==0)
		{
			x-=5;
		}
		else
		{
			x-=2;
		}
		
		
	}
	
		
}
