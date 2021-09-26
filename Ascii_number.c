#include<stdio.h>

int main()

{

  char a;

  Begin:

  printf("\nEnter the number for the ascii number : ");

  scanf("%c",&a);

  printf("\n***************************************************************************\n");

  if(a!='*')
  {

    printf("\nThe ascii value of %c is %d\n\nThank you for playing with us\n",a,a);

  }
  else

    goto Begin;

  printf("\n***************************************************************************\n");

  return 0;

}
