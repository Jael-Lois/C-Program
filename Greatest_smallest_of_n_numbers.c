#include<stdio.h>
int main()
{

  int i,h,j,l,n;

  printf("How many numbers will you enter ? \n");
  scanf("%d",&n);

  int a[n];

  for(i=0;i<n;i++)
  {
    printf("\nEnter the number : ");
    scanf("%d",&a[i]);
  }

  h = a[0];

  l = a[0];

  for(j=0;j<n;j++)
  {

  if(a[j]>h)
     h = a[j];

  if(a[j]<l)
    l = a[j];
   }

  printf("The greatest value is %d",h);

  printf("\nThe least value is %d",l);


  return 0;

}
