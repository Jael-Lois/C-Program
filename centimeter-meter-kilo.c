#include<stdio.h>
#include<math.h>
int main()
{
  int num;
  float cent,meter,kilo;
  Begin:
  printf("\n_____________________________________________");
  printf("\nWant to find centimeter to meter     : 1");
  printf("\nWant to find centimeter to kilometer : 2");
  printf("\nWant to find meter to centimeter     : 3");
  printf("\nWant to find meter to kilometer      : 4");
  printf("\nWant to find kilometer to centimeter : 5");
  printf("\nWant to find kilometer to meter      : 6");
  printf("\n_____________________________________________");
  printf("\nEnter your choice : ");
  scanf("%d",&num);
  switch(num)
{
    case 1:
            printf("\nEnter the amount in centimeter : ");
            scanf("%f",&cent);
            meter = cent/100;
            printf("\nThe answer in meter is : %.4f",meter);
            break;
    case 2:
            printf("\nEnter the amount in centimeter : ");
            scanf("%f",&cent);
            kilo = cent/100000;
            printf("\nThe answer in meter is : %.4f",kilo);
            break;
    case 3:
            printf("\nEnter the amount in meter : ");
            scanf("%f",&meter);
            cent = meter*100;
            printf("\nThe answer in meter is : %.4f",cent);
            break;
    case 4:
            printf("\nEnter the amount in meter : ");
            scanf("%f",&meter);
            kilo = meter/1000;
            printf("\nThe answer in meter is : %.4f",kilo);
            break;
    case 5:
            printf("\nEnter the amount in kilometer : ");
            scanf("%f",&kilo);
            cent = kilo*100000;
            printf("\nThe answer in meter is : %.4f",cent);
            break;
    case 6:
            printf("\nEnter the amount in kilometer : ");
            scanf("%f",&kilo);
            meter = kilo*1000;
            printf("\nThe answer in meter is : %.4f",meter);
            break;
}

  goto Begin;

  return 0;
}
