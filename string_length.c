#include<stdio.h>
#include<string.h>
int main()
{
  int a,i;
  char name[100];
  Begin:
  printf("\nEnter your name : ");
  scanf("%s",name);
  a = strlen(name);
  printf("\nThe length of your name is %d \n",a);

  for(i=0;i<a;i=i+2)
  printf("%c ",name[i]);
  goto Begin;
  return 0;
}
