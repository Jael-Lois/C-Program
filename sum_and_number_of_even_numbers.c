#include<stdio.h>
#include<math.h>
int main()
{
  int num,i,s,n;
  Begin:
  printf("\n\n********************************************************\n");
  printf("Enter the number : ");
  scanf("%d",&num);
  s = 0;
  for(i=0;i<=num;i=i+2)
  {
    printf("The numbers are            :                 %d\n",i);
    s = s+i;
  }
  printf("                                          ________");
  printf("\nThe sum of the numbers are :                 %d\n",s);
  printf("                                          ________");
  goto Begin;
  return 0;
}
