#include<stdio.h>
#include<conio.h>
//1.5, 2.3, 3.1, 3.9,  
void main ()
{
	float i, x=1.5;
	for(i=1;i<=10;i++)
	{
		printf("%.1f ",x); //%.1f used to elimated 5 num after point (.)....
		x+=0.8;
	}
		
}

