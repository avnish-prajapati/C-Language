#include<stdio.h>
#include<conio.h>
//14, 28, 20, 40, 32, 64  *2 then  -8
void main ()
{
	 int i, x=14;
	 for(i=1; i<=10;i++)
	 {
	 	printf("%d ",x);
	 	
	 	if(i%2==0)
	 	{
	 		x-=8;	
		 }
	 	else 
	 	{
	 		x*=2;
		}
	 
	 	
	 }
	
	
	
	
	
	
	
	
	
	
	
	
	
}
