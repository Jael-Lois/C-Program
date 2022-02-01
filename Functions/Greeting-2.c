#include<stdio.h>
#include<math.h>
char a[100];
 void greeting()
{
  printf("Enter your name");
  scanf("%s",a);
}
int main()
{
 greeting();
 printf("Good to see you %s",a);
 return 0;
}
