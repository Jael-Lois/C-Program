#include<stdio.h>
int main()
{
  int n,i;
  Begin:
  printf("\nEnter the number : ");
  scanf("%d",&n);
  for(i=1;i*i<n;i++)
  {
    printf("\nThe square numbers below %d : %d ",n,i);
    printf("\n%d square number : %d",i,i*i);
  }
  printf("\n_________________________________________________");
  goto Begin;
  return 0;
}
