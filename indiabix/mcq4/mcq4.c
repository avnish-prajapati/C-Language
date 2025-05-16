#include<stdio.h>
#include<conio.h>
// 22, 21, 23, 22, 24, 23,
void main ()
{
	int i,x=22;//always took starting value 
	
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,x-1); // 22 - 1 = 21 =x
		x+=1; //21 + 2 = 23 then its loop continue by 5 times ... 
	}
		
}
