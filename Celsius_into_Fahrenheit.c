#include<stdio.h>

int main()
{
  
// f = (c*1.8)+32 - fromula

float c,f;

printf("Enter the value for celsius : ");

scanf("%f",&c);

f = (c*1.8)+32;

printf("\n\nThe temprature in fahrenheit is %.4f",f);

return 0;

}
