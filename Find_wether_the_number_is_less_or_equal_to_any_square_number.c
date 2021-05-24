#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,a,b,c;
  Begin:
  printf("\n*************************************************************************************************");
  printf("\nEnter your number : ");
  scanf("%d",&n);
  i=1;
  while(n>(i*i))
  i++;
  a = i;
  b = sqrt(n)+1;
  if(a==b)
  printf("The answer without square root is : %d\n\nThe answer with square root is : %d",a,b);
  goto Begin;
  return 0;
}
