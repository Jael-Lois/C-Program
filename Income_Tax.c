#include<stdio.h>
#include<math.h>
int main()
{
  int salary;
  float income;
  Begin:
  printf("\n\n**************************************************");
  printf("\n\nEnter your annual salary : ");
  scanf("%d",&salary);
  printf("\n\n**************************************************");
  if(salary<=500000)
  income = 0;
  else if(salary<=650000)
  income = (salary-500000)*10/100;
  else if(salary<=800000)
  income = (150000*10/100)+((salary-650000)*20/100);
  else
  income = (150000*10/100)+(150000*20/100)+((salary-800000)*30/100);
  printf("\nYour INCOME is : %f",income);
  goto Begin;
  return 0;
}
