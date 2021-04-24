#include<stdio.h>
int main()

{

  float mark;

  printf("Enter your mark or your friend's mark : ");

  scanf("%f",&mark);

  if (mark<50)
  {

    printf("\n\nYou have FAILED");

    printf("\n\nYou have to redo your exam");

  }

  else if (mark<60)

  {

    printf("\n\nYou are FIRST CLASS");

    printf("\n\nIf you want you can redo your exam");

  }

  else if (mark<80)

  {

    printf("\n\nYou are SECOND CLASS");

    printf("\n\nIf you want you can redo your exam");

  }

    else if (mark<=100)

  {

    printf("\n\nYou are DISTINCTION");

    printf("\n\nYou cannot rewrite your exam");

  }

  else

      printf("\nYou can onl enter you mark between the numbers 0 to 100");

  return 0;

}
