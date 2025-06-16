#include<stdio.h> //standard input output headfile..
#include<conio.h>	//console input output headfile..

// 1 0 1 0 1
//   1 0 1 0
//     1 0 1  
//       1 0
//         1

void main()  // its starting point of codes..
{
	int i,j;  // A datatype type <int> which contains two varibale i , j .. 

    for(i=5; i>=1; i--)
    {
    	int k; // another variable in need to used space between value..
    	
        for(k=5; k>i; k--)
            {
                printf("  ");
            }
            
            for(j=1; j<=i; j++)  
            {
        
                if(j%2==0)  // even or odd formate used to select 0 or 1 output for patterns..
                {
                    printf("0 ");
                }
                else 
                {
                    printf("1 ");
                }
                
            }
            printf("\n"); // for line break...
        }
        
}
