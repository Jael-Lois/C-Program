#include<stdio.h>

int main()
{

    int y,l,ch;

    Begin:

    printf("\n****************************************************");

    printf("\n\nEnter the year : ");

    scanf("%d",&y);

    if((y%100)==0)

    {

      if((y%400)==0)

      printf("\n\nThe year you have entered is a leap year");

      else

      printf("\n\nThe year you have entered is not a leap year");

    }

    else

    {

      if((y%4)==0)

      printf("\n\nThe year you have entered is a leap year");

      else

      printf("\n\nThe year you have entered is not a leap year");

    }

    printf("\n\n****************************************************");

    printf("\nDo you want to continue or not ")

    printf("\n\n****************************************************");

    printf("\nYES : 1");

    printf("\n\nNO : 2");

    printf("\n\n****************************************************");

    printf("\n\nEnter your choice : ");

    scanf("%d",&ch);

    if(ch==1)

    goto Begin;

    return 0;

}
