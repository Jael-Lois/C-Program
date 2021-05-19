#include<stdio.h>
#include<math.h>
int main()
{
  int i,n,rate;
  float total;
  Begin:
  printf("\n\n*****************************************************************");
  printf("\n\nEnter the number of items you have purchased : ");
  scanf("%d",&n);
  total = 0;
  for(i=1;i<=n;i++)
  {
    printf("\n\nEnter your rate for the %d item : ",i);
    scanf("%d",&rate);
    total = total + rate;
  }
  printf("\n\n*****************************************************************");
  printf("\n\nYour bill before discount is : %f",total);
  if(total>2000)
  total*=0.8;
  else if(total>1000)
  total*=0.85;
  else
  total*=0.9;printf("\n\nThe bill after discount is : %f",total);
  printf("\n\n*****************************************************************");
  printf("\n*****************************************************************");
  printf("\n*****************************************************************");
  goto Begin;
  return 0;
}
