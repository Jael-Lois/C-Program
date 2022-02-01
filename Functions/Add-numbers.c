#include<stdio.h>

int add(int a,int b)
{

  return (a+b);

}

int main()

{

  int h,l;
  printf("Enter 2 numbers: ");

  scanf("%d",&h);
  scanf("%d",&l);

  printf("%d",add(h,l));

  return 5;
}
