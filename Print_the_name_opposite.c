#include<stdio.h>
#include<string.h>
int main()
{
  int i,a;

  char name[100];

  printf("Enter your name : ");
  scanf("%s",name);

  a = strlen(name);

  for(i=a-1;i>=0;i--)
  printf("%c",name[i]);

  return 0;
}
