#include<stdio.h>

int main()
{

    //divisible by 5 and 11

    int y,a,b;

    printf("Enter the number to check whther it is divisible by 5 and 11 :");

    scanf("%d",&y);

    a = y%5;

    b = y%11;

    if((a+b)==0)

    printf("\nYour number is divisible by 5 and 11 ");

    else

    printf("\nThe number you have entered is not divisible by 5 or 11 or both");

    return 0;
}
