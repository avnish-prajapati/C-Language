#include<stdio.h>
#include<conio.h>

int main()
{
    char str[100];
    char *ptr;
    int i;

    printf("Enter any string: ");
    fgets(str,sizeof(str),stdin);  //fgets better than gets 

    ptr=str;

    for (i=0; *ptr!='\0' && *ptr!='\n';i++) 
    {
        ptr++;
    }
    printf("Length of string is %d\n", i);

    
}