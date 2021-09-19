#include <stdio.h>

int main() 
{
    int a,b,i,j,m = 1;
    
    printf("Enter values : ");
    scanf("%d %d",&a, &b);
  
    for(i=1;i<=a;i++)
    {
     for(j=1;j<=b;j++)
     printf("%d\t",m++);
     printf("\n");
    }
    return 0;
}
