#include<stdio.h>
#include<conio.h>

// *     *
// *     *
// *     * 
// *     *
// *  *  * 
// * * * *
// *     *

void main()
{
    int i,j;

    for ( i = 1; i <= 7; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            if ((j==1||j==5))
            {
                printf("* ");
            }
            else if ((i==6)&&j==2)
            {
                printf("* ");
            }
            else if ((i==5)&&j==3)
            {
                printf("* ");
            }
            else if ((i==6)&&j==4)
            {
                printf("* ");
            }
            
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    
}
