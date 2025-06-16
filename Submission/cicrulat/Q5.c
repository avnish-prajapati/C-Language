#include<stdio.h> //standard input output headfile.
#include<conio.h> //console input output headfile,

//         5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1

void main()	// its starting point of codes.
{
    int i, j, k;	// A datatype type <int> which contains two varibale i,j,k as need  to as required pattern,,

    for(i=5; i>=1; i--)
    {
        for(k=1; k<i; k++)
        {
            printf("  ");
        }

        for(j=i; j<=5; j++)
        {
            printf("%d ", j); // always used space after %d or even ,.
        }
        int n;
        
        for(n=4; n>=i; n--)
        {
            printf("%d ", n);  
        }
        printf("\n");
    }
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
