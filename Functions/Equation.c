#include<stdio.h>

int a,b;

void Equation()
{
  //x^2 + x(a+b) + (a*b)
  printf("\nThe equation is x^2 + (%d)x + (%d) = 0",a+b,a*b);
}

int main()
{
  printf("\nEnter the 1 numbers : ");
  scanf("%d",&a);

  printf("\nEnter the 2 numbers : ");
  scanf("%d",&b);

  Equation();
  
  return 0;
}
