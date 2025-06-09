#include<stdio.h>
#include<conio.h>

void main ()
{
//	WAP to Simple interest. 
	int si,p,r,t;      
//	p=principle , r=rate , t=time
	printf("Enter a p :");
	scanf("%d",&p);
	printf("Enter a r :");
	scanf("%d",&r);
	printf("Enter a t :");
	scanf("%d",&t);
//	formula to made a S.I	
	si=(p*r*t)/100;
	
	printf("simple interset %d:",si);
		
}
