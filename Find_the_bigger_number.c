#include<stdio.h>
#include<math.h>
int main()
{
  int num,i,b;
  printf("\nEnter the numbers you want to find out :) : ");
  scanf("%d",&num);
  int a[num];
  for(i=0;i<=num-1;i++)
  {
    printf("\nEnter Your %d number : ",i+1);
    scanf("%d",&a[i]);
  }
  b = a[0];
  for(i=0;i<=num-1;i++)
  {
    if (b<a[i])
    b = a[i];
  }
  printf("\nThe greatest number is : %d",b);
}
