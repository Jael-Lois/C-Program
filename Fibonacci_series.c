#include<stdio.h>
#include<math.h>
int main()
{
  int f,s,e,i,n;
  Begin:
  printf("\nEnter the number of fibonacci number you want to know : ");
  scanf("%d",&n);
  f=1;
  s=0;
  printf("The number are : ");
  for(i=1;i<=n;i++)
  {
    e = f+s;
    printf("\n                 %d\n",e);
    f = s;
    s = e;
  }
  goto Begin;
  return 0;
}
