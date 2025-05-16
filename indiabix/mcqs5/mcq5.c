#include<stdio.h>
#include<conio.h>

void main ()
{
	
	//53, 53, 40, 40, 27, 27, 
	int i=1 , x=53; 
	for (i=1; i<=5; i++)  // start ,end , increamant  
	{
		printf ("%d %d ",x,x); // x,x to repeat same number in row as x=53 then another x=53 
		x-=13; // x=53 which going to less 13 times as 53-13=40 ans
	}
	
	
	
	
	
	
	
	
	
	
}
