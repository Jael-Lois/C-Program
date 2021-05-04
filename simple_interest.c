#include<stdio.h>
#include<math.h>
int main()
{
  float p,n,r,si,a;
  int ch;
  Begin:
  printf("\n********************************************************************");
  printf("\nEnter if you want to find Simple interest      : 1");
  printf("\nExit                                           : 2");
  printf("\n********************************************************************\n");
  printf("Enter your choice : ");
  scanf("%d",&ch);
  switch (ch)
  {
    case 1:
            printf("\nEnter a value for principle : ");
            scanf("%f",&p);
            printf("\nEnter a value for number of years : ");
            scanf("%f",&n);
            printf("\nEnter a value for rate of interest : ");
            scanf("%f",&r);
            si = (p*n*r)/100;
            printf("\n Simple Interest : %.4f",si);
            break;
    case 2:
            break;
  }
  if(ch!=2)
  goto Begin;
  return 0;
}
