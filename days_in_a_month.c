#include<stdio.h>
int main()
{
  //31days in january
  int month;
  Begin:
  printf("\n*******************************************************\n");
  printf("January                    : 1");
  printf("\nFebruary                 : 2");
  printf("\nMarch                    : 3");
  printf("\nApril                    : 4");
  printf("\nMay                      : 5");
  printf("\nJune                     : 6");
  printf("\nJuly                     : 7");
  printf("\nAugust                   : 8");
  printf("\nSeptember                : 9");
  printf("\nOctober                  : 10");
  printf("\nNovember                 : 11");
  printf("\nDecember                 : 12");
  printf("\nExit                     : 13");
  printf("\n*******************************************************\n");
  printf("Enter the number of the month : ");
  scanf("%d",&month);
  if(((month==1)||(month==3)||(month==5)||(month==7)||(month==9)||(month==11)||(month==8)))
  printf("\nThis month has 31 days");
  else if(month==2)
  printf("\nThis month has 28 days and 29 days on leap year");
  else if((month==4)||(month==6)||(month==10)||(month==12))
  printf("This month has 30 days");
  else
  goto Begin;
  return 0;
}
