#include<stdio.h>
#include<conio.h>


void cube(int *p, int rows, int cols)
{
    for (int i = 0; i < rows * cols; i++)
    {
        *(p + i) = (*(p + i)) * (*(p + i)) * (*(p + i));
    }
}

void matrix(int *p, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", *(p + i * cols + j));
        }
        printf("\n");
    }
}

void main()
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    cube(&a[0][0], r, c);

    printf("\nMatrix after cubing each element:\n");
    matrix(&a[0][0], r, c);
}