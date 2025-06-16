#include<stdio.h> //standard input output headfile
#include<conio.h>	//console input output headfile..

// * * * * *
// *       *
// * * * * *
// *
// *

void main () // its starting line if code..
{
   int i,j; // A datatype type <int> which contains two varibale i,j,
   
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1 || i==3 || j==1)
{
printf("* ");
}
else if(i==2 && j==5)
{
printf("* ");
}
}
printf(" ");
		}
	}
	
