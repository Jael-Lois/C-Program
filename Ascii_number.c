#include<stdio.h>

int main()

{

  char a;
  
  begin:

  Begin:

  printf("\nEnter the number for the ascii number : ");

  scanf("%c",&a);

  printf("\n***************************************************************************\n");

  if(a!='*')
  {

    printf("\nThe ascii value of %c is %d\n\nThank you for playing with us\n",a,a);

    goto begin;

  }
  else

    goto Begin;

  printf("\n***************************************************************************\n");

  return 0;

}
