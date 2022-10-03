#include<stdio.h>
#include<math.h>
int main()
{

  int a[4],i,g=0;

  struct area
  {
    int l;
    int b;
  } area[4];

  for(i=0;i<4;i++)
  {

    printf("\nEnter the length : ");
    scanf("\n%d",&area[i].l);

    printf("\nEnter the breath : ");
    scanf("\n%d",&area[i].b);

    a[i] = area[i].l*area[i].b;

    printf("\n\nThe area is %d",a[i]);

    if(a[i]>g)
    g = a[i];

  }

  //greater area
  printf("\n\nThe plot of greater area is %d",g);


  return 0;
}
