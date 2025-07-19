#include<stdio.h>
#include<conio.h>
//frequency 
void main()
{
    char str[100],i;
    int spell=0;
    printf("Enter a string :");
    gets(str);
    int j;
    for ( i = 'a'; i <='z'; i++)
    {
        spell=0;
        for (j = 0; str[j]!='\0'; j++)
        {
            if (i==str[j])
            {
                spell++;
            }
        }
        if (spell>0)
        {
            printf("%c = %d\n",i,spell);
        }

    }


}