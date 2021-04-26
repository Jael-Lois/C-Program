#include<stdio.h>
int main()
{

    printf("This programm is to add 2 nmbers");

    float a,b,c;

    printf("\n\nEnter the first value : ");

    scanf("%f",&a);

    printf("\nEnter the second value : ");

    scanf("%f",&b);

    c = a+b;

    printf("\n\nThe addition of %f + %f is %.2f",a,b,c);

    return 0;
}
