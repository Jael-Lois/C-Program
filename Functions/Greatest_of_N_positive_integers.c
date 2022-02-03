#include<stdio.h>
int a,i,g,get;
void GETTHEVALUE()
  {
    printf("Enter the number of valued you want to enter :");
    scanf("%d",&a);
    g = 0;
  }
void convert()
  {
      GETTHEVALUE();
    for(i=1;i<=a;i++)
    {
      printf("\nEnter the value : ");
      scanf("%d",&get);

      if(get>=g)
      g = get;
    }
    printf("\nThe greatest value is %d",g);
  }
int main()
  {
    convert();
    return 0;
  }
