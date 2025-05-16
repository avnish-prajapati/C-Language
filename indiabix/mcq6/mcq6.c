#include<stdio.h>
#include<conio.h>
//21, 9, 21, 11, 21, 13, 21
void main ()
{
	int x, y=21, z=9; // x=1 , y starting which always be unchanges as z not
	 
	for(x=1;x<=5;x++)
	{
		printf("%d %d ",y,z);
		z+=2;  // z=9 + 2 = 11 + 2 =13 
	}

	
}

