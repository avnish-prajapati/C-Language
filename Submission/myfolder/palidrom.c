#include<stdio.h>
#include<conio.h>  
#include<string.h>

void main()
{
    char str[100];
    int i, length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);  // single word only

    length = strlen(str); 

    for (i = 0; i<length/ 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;  // Not a palindrom
            break;
        }
    }

    if (flag==1)
        printf("The string is palindrom.\n");
    else
        printf("The string is not palindrom.\n");

    
}