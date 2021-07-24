#include<stdio.h>
int main()
{
  int a,i,d,e;
  printf("\nEnter the number of students in class : ");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
  printf("\n%d student",i);
  printf("\nEnter the mark for the first subjects : ");
  scanf("%d",&d);
  printf("\nEnter the mark for the second subjects : ");
  scanf("%d",&e);
  printf("\nTotal marks : %d",d+e);
  }
  return 0;
}
