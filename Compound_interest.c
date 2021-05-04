#include<stdio.h>
#include<math.h>
int main()
{
  float p,n,r,a,i,cp;
  printf("Enter the number of years : ");
  scanf("%f",&n);
  printf("\nEnter the amount for the principal : ");
  scanf("%f",&p);
  a = 1;
  for(i=1; i<=n ; i++)
  {
    printf("\n\nEnter a value for rate of interest : ");
    scanf("%f",&r);
    a = (1+(r/100.0))*a;
  }
  a = a*p;
  cp = a-p;
  printf("\nprincipal         : %f",p);
  printf("\n amount           : %f",a);
  printf("\nCompound interest : %f",cp);
  return 0;
}
