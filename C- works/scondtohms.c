#include<stdio.h>
#include<conio.h>

void main ()
{
	int second;
	
	printf("Enter second :");
	scanf("%d",&second);
	
	if (second>59)
	{
		int minutes = second /60;
		second = second % 60;
		
		if (minutes>59)
		{
			int hours = minutes /60;
			minutes = minutes %60;
			printf ("%d:%d:%d",hours,minutes,second);
		}
		else 
		{
			printf("00:%d:%d",minutes,second);	
		}	
	}
	
	else 
		{
			printf ("00:00:%d",second);
		}
	
	
	
	
	
	
	
	
	
	
	
}
