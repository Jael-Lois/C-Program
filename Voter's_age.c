#include<stdio.h>
#include<math.h>
int main()
{
  int age;
  Begin:
  printf("\nEnter your age : ");
  scanf("%d",&age);
  printf("\n***********************************************************");
  if(age>=18)
  printf("\nCongratulation! You are eligible for casting your vote.");
  else
  printf("\nYou are not eligible for casting your vote.");
  printf("\n***********************************************************");
  goto Begin;
  return 0;
}
