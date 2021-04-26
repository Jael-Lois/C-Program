#include<stdio.h>

int main()
{
    int a,b,c,d;
    
    printf("Enter you first value : ");
    
    scanf("%d",&a);
    
    printf("\nEnter your second value : ");
    
    scanf("%d",&b);
    
    c = a/b;
    
    d = a%b;
    
    printf("\n\nThe quotient for %d and %d is %d",a,b,c);
    
    printf("\n\nThe reminder for %d and %d is %d",a,b,d);
    
    return 0;
    
}
