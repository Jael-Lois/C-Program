/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
e = electricity
b = bill*/
#include<stdio.h>
#include<math.h>
int main()
{
  float e,b;
  Begin:
  printf("\n***********************************************");
  printf("\nEnter the electricity amount used : ");
  scanf("%f",&e);
  printf("\nThe bill amount is : ");

  if (e<=50)
  {
    b = e*0.50;
    printf("                                    \n%.2f",b);
  }
  else if(e<=150)
  {
    b = (e*50)*((e-50)*0.75);
    printf("                                    \n%.2f",b);
  }
  else if(e<=250)
  {
    b = (e*50)*((e-50)*0.75)*((e-150)*1.20);
    printf("                                    \n%.2f",b);
  }
  else
  {
    b = (e*50)*((e-50)*0.75)*((e-150)*1.20)*((e-250)*1.50);
    printf("                                    \n%.2f",b);
  }
  goto Begin;
  return 0;
}
