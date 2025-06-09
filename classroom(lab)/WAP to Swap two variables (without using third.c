#include<stdio.h>
#include<conio.h>

void main ()
{
	int x=10,y=25;
//	2.WAP to Swap two variables (without using third variable)
	printf("value of x :10 \n");
	printf("value of y :25 \n");
	
	x=y+x; //25+10=35x
	y=x-y; //35-25=10y
	x=x-y; //35-10=25x
	
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	
	
	
	
	
}
