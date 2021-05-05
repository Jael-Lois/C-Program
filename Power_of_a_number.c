#include<stdio.h>
#include<math.h>
int main()
{
  int num,i,p,a;
  Begin:
  printf("\n********************************************************************");
  printf("\nEnter the number : ");
  scanf("%d",&num);
  printf("\nEnter the power : ");
  scanf("%d",&p);
  printf("\n********************************************************************");
  a = 1;
  for(i=1;i<=p;i++)
  {
    a = num*a;
  }
  printf("\n\nThe answer is %d",a);
  goto Begin;
}
