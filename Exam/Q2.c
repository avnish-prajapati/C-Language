#include<stdio.h>
#include<conio.h>
//Create a C program to find the smallest element in an 1D array
void main ()
{
	int n,i,j;
	
	printf("Enter n :"); // user input 
	scanf("%d",&n);
	
	int a[n];	// value store
	
	printf("%d ",a[n]);
	scanf("%d",&a[n]);
	for(i=0; i<n; i++)
	{
		for(j=0; j<i; j++)
		{
			printf("%d ",a[n],i,j);
			printf("%d ",a[i]);	
		}
	}
	
	
	
	
	
	
	
}
