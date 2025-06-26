#include<stdio.h>
#include<conio.h>

// Transpose of the 2D array ....
void main()
{
    int r,c;

    
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c], transpose[c][r];
	int i,j;
    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose the matrix
    
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            transpose[j][i] = a[i][j];
        }
    }

    // original matrix given by user...
    
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < r; i++) 
	{
        for (j = 0; j < c; j++) 
		{
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Print transposed matrix
    
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < c; i++) 
	{
        for (j = 0; j < r; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }


}
