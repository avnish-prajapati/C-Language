#include<stdio.h>
#include<conio.h>

void main ()
{
	int n;
	
	printf ("Enter num : ");
	scanf("%d",&n);
	
	int i=0;
	 
	while(i>=n)
	{
		printf("%d ",i); 
		
		i--;
	}
}

