#include<stdio.h>

int main()
{
  int a,b;
  printf("\n****************************************");
  printf("\nEnter the first number : ");
  scanf("%d",&a);
  printf("\nEnter the second number : ");
  scanf("%d",&b);
  printf("\n****************************************");
  if(a>b)
  printf("\nThe maxium number is %d",a);
  else if(a==b)
  printf("\nThe numbers %d and %d are equal",a,b);
  else
  printf("\nThe maxium number is %d",b);
  return 0;
}
