#include<stdio.h>

int main()
  
{
  
    int o,num;
  
    printf("Enter the number to check whether the number is odd or not : ");
  
    scanf("%d",&num);
  
    o = num%2;
  
    if(o!=0)
      
    printf("\n\nThe number you have entered is an odd number");
  
    else
      
    printf("\n\nThe you have entered is an even number");
  
    return 0;
  
}
