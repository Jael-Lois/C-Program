#include <stdio.h>

int main()
{
    int i,j,a,b;
    printf("Enter the number for the pattern : ");
    scanf("%d",&a);
    
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        
        printf("\n");
    }
    
    
    for(i=a;i>=0;i--)
    {
        for(j=i;j>=0;j--)
        printf("*");
        
        printf("\n");
    }
    return 0;
}
