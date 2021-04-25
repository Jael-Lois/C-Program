#include<stdio.h>
int main()

{

  int num,n1;

  printf("Enter your number : ");

  scanf("%d",&num);

  n1 = num%2;

  if((n1)==1)

  {

    printf("\n\nThe number you have entered is odd");

    printf("\n\n\nTHANK YOU");

  }

  else

  {

    printf("\n\nThe number you have entered is even");

    printf("\n\n\nTHANK YOU");
    
  }

  return 0;

}
