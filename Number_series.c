#include<stdio.h>
#include<math.h>
int main()
{
  int f,s,i,n,e;
  printf("\nEnter the number in multiplies of 3.");
  printf("\nEnter the number :");
  scanf("%d",&n);
  printf("\n\nThe numbers are : ");
  for(i=1;i<=n;i=i+3)
  {
    f = i*i*i;
    s = (i+1)*(i+1)*(i+1);
    e = f+s;
    printf("\n                       %d\n                       %d\n                       %d",f,s,e);
  }
  return 0;
}
