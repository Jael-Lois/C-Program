#include<stdio.h>

 int Equation(int a1,int a2,int c)
{
  //x^2 + x(a+b) + (a*b)
  if (c==1)
  return (a1+a2);
  else
  return (a1*a2);
}

int main()
{
  int a,b,sum,product;

  printf("\nEnter the 1 numbers : ");
  scanf("%d",&a);

  printf("\nEnter the 2 numbers : ");
  scanf("%d",&b);

  sum = Equation(a,b,1);
  product = Equation(a,b,0);

  printf("\n\nEquation : x^2 + (%d)x + %d",sum,product);

  return 0;
}
