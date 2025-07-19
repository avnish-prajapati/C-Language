#include<stdio.h>
#include<conio.h>
// calculator (calicus)
void calicus(int a, int b)
{
  int choose;

  do
  {
    printf("\nOptions:\n");
    printf("1.Add\n");
    printf("2.Sub\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.Modulus (%%)\n");
    printf("6.Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
      printf("%d + %d = %d\n", a, b, a + b);
      break;
    case 2:
      printf("%d - %d = %d\n", a, b, a - b);
      break;
    case 3:
      printf("%d * %d = %d\n", a, b, a * b);
      break;
    case 4:
      if (b != 0)
        printf("%d / %d = %d\n", a, b, a / b);
      else
        printf("Divide by 0 not allowed!\n");
      break;
    case 5:
      if (b != 0)
        printf("%d %% %d = %d\n", a, b, a % b);
      else
        printf("Modulus by 0 not allowed!\n");
      break;
    case 6:
      printf("Exiting...\n");
      break;
    default:
      printf("Invalid choice! Try again.\n");
      break;
    }
  } while (choice != 6);
}

void main()
{
  int a, b;

  printf("Enter a num: ");
  scanf("%d", &a);

  printf("Enter b num: ");
  scanf("%d", &b);

  calicus(a,b); 
}