#include<stdio.h>
void add()
{
  int a,b;
  printf("\n*************************************************");
  printf("\nADDITION");
  printf("\n*************************************************");
  printf("\n\nEnter the 2 numbers : ");
  scanf("%d %d",&a,&b);
  printf("\nThe answer for addition : %d",(a+b));
}
void subtract()
{
  int a,b;
  printf("\n*************************************************");
  printf("\nSUBTRACTION");
  printf("\n*************************************************");
  printf("\n\nEnter the 2 numbers : ");
  scanf("%d %d",&a,&b);
  printf("\nThe answer for subtraction : %d",(a-b));
}
void multiply()
{
  int a,b;
  printf("\n*************************************************");
  printf("\nMULTIPLICATION");
  printf("\n*************************************************");
  printf("\n\nEnter the 2 numbers : ");
  scanf("%d %d",&a,&b);
  printf("\nThe answer for multiplication : %d",(a*b));
}
void divide()
{
  int a,b;
  printf("\n*************************************************");
  printf("\nDIVITION");
  printf("\n*************************************************");
  printf("\n\nEnter the 2 numbers : ");
  scanf("%d %d",&a,&b);
  if (b==0)
  printf("\nThe answer is undifined");
  else
  printf("\nThe answer for divition : %.3f",(float)(a/b));
}
int main()
{
  Begin:
  add();
  subtract();
  multiply();
  divide();
  goto Begin;
  return 0;
}
