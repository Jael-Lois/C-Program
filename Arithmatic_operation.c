#include <stdio.h>

int main()
{
    float a,b,c;
    int ch;
    Begin:
    printf("\n*********************\n");
    printf("\nTo add 2 numbers             : 1");
    printf("\nTo subract 2 numbers         : 2");
    printf("\nTo muliply 2 numbers         : 3");
    printf("\nTo division 2 numbers        : 4");
    printf("\nExit                         : 5");
    printf("\n\n*********************");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
              printf("\nEnter a number : ");
              scanf("%f",&a);
              printf("\nEnter a number : ");
              scanf("%f",&b);
              c = a+b;
              printf("\n Addition : %.4f",c);
              break;
      case 2:
              printf("\nEnter a number : ");
              scanf("%f",&a);
              printf("\nEnter a number : ");
              scanf("%f",&b);
              c = a-b;
              printf("\n Subraction : %.4f",c);
              break;
      case 3:
              printf("\nEnter a number : ");
              scanf("%f",&a);
              printf("\nEnter a number : ");
              scanf("%f",&b);
              c = a*b;
              printf("\n Multiplication : %.4f",c);
              break;
      case 4:
              printf("\nEnter a number : ");
              scanf("%f",&a);
              printf("\nEnter a number : ");
              scanf("%f",&b);
              c = a/b;
              printf("\n Division : %.4f",c);
              break;
      case 5:
              break;
    }
    if(ch!=5)
    goto Begin;

    return 0;
}
