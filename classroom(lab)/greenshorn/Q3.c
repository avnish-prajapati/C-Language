#include<stdio.h>
#include<conio.h>

//celsius covert to fahrenheit

void main()
{
	int celsius;
	
	printf("Enter tempreture in celsius : "); 
	scanf("%d",&celsius);
	
	float f;
	f = (celsius * 9/5) + 32;
	printf("fahrenheit :%.1f",f );
	
}
