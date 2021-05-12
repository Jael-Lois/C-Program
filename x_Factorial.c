#include<stdio.h>
#include<math.h>
int main()
{
  int n,x,i;
  long int fact;
  double power1,ex;
  //Begin:
  printf("\n*********************************************************");
  printf("\nEnter the number you want to know :  ");
  scanf("%d",&x);
  fact = 1;
  power1 = 1;
  ex = 1;
  for(i=1;i<=12;i++)
  {
    fact = fact*i;
    power1 *= x;
    ex += (float)power1/fact;
    printf("%lf\n",power1);
  }
  printf("\n\nAnswer ------> %.2f",ex);
  printf("\n exp function = %.2f",exp(x));
  printf("\n*********************************************************");
  //goto Begin;
  return 0;
}
