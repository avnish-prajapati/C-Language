#include<stdio.h>  //standard input output headfile
#include<conio.h>   //console input output headfile..

	// 1                 1
	// 1 2             2 1
	// 1 2 3         3 2 1
	// 1 2 3 4     4 3 2 1
	// 1 2 3 4 5 5 4 3 2 1

void main()	// its starting point of codes.
{
    int i,j,k;
	// A datatype type <int> which contains three varibale i,j,k as need  to as required pattern both side ..
    
	for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        
         for(k=4; k>=i; k--) // for 8 line of space ...
        {
            printf("    ");
        }
        int n; // for other pattern..
        
        for(n=i ;n>=1; n--) // for opposite of patterns which start from 1 as j variable...
        {
            printf("%d ", n);
        }
        printf("\n"); // line breaker,,
    }

        
}
