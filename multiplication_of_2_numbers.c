#include<stdio.h>
#include<math.h>
int main()
{
  float a,b,c;
  printf("\nEnter the number : ");
  scanf("%f",&a);
  printf("\n\nEnter the nmber of times you want to multiply : ");
  scanf("%f",&b);
  c = a*b;
  printf("\n\n Answer : %.4f",c);
  return 0;
}
