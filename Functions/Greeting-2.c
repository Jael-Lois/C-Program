#include<stdio.h>
#include<math.h>
char a[100];
 void greeting()
{
  printf("Enter your name in the greeting function : ");
  scanf("%s",a);
}
int main()
{
 greeting();
 printf("Good to see your name in the main function %s",a);
 return 0;
}
