#include <stdio.h>

int main()
{
    int num,ch;
    printf("\n**********************\n");
    printf("\nTo find the Nth number : 1 ");
    printf("\nTo find the Nth term   : 2 ");
    printf("\n**********************\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
              printf("\nEnter a value for the N variable : ");
              scanf("%d",&num);
              num = ((num+1)/2)*((num+1)/2);
              printf("The value for the Nth number is %d",num);
              break;
      case 2:
              printf("\nEnter a value for the Nth variabel : ");
              scanf("%d",&num);
              num = num*num;
              printf("The value for the Nth term is %d",num);
              break;
    }
    return 0;
}
