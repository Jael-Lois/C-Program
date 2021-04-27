#include <stdio.h>

int main()

{

printf("ONLY ENTER THE FIRST AND THE LAST POINT");

float m,y1,y2,x1,x2,n;

printf("Enter the value for y1 : ");

scanf("%f",&y1);

printf("\nEnter the value for y2 : ");

scanf("%f",&y2);

printf("\nEnter the value for x1 : ");

scanf("%f",&x1);

printf("\nEnter the value for x2 : ");

scanf("%f",&x2);

m = (y2-y1)/(x2-x1);

printf("\n\nThe answer is %f",m);

printf("\n\nEnter the value for y1 : ");

scanf("%f",&y1);

printf("\nEnter the value for y2 : ");

scanf("%f",&y2);

printf("\nEnter the value for x1 : ");

scanf("%f",&x1);

printf("\nEnter the value for x2 : ");

scanf("%f",&x2);

n = (y2-y1)/(x2-x1);

printf("\n\nThe answer is %f",n);

if(m==n)

printf("\nThe motion is uniform");

else

printf("\nThe motion is not Uniform");

return 0;

}
