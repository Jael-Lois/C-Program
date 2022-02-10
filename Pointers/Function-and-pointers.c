#include<stdio.h>
#include<string.h>

int Sumofasciivalue(char *a)
{
  int l,sum,i;

  sum = 0;

  l = strlen(a);

  for(i=0;i<l;i++)
    sum+=*(a+i);

  return sum;
}
int main()
{
  int sum;

  char name[20];

  printf("Enter The name : ");
  scanf("%s",name);

  sum = Sumofasciivalue(name);

  printf("The sum of the ascii values : %d",sum);

  return 0;
}
