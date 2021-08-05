#include <stdio.h>

int main()
{
    int i,j,a,b;
    printf("Enter the number for the pattern : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)//column
    {
        for(j=1;j<=a;j++)//row
        {
            if(j<=i)
            printf("$");
            else
            printf("*");
        }
        
        printf("\n");
    }   
    return 0;
}
