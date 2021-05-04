#include <stdio.h>

int main() {
    int i,m,n;
    printf("Enter the number of cube and square you want : ");
    scanf("%d",&n);
    for(i=1,m=0;i<=n-1;i++)
    {
      if(i%2==0)
      {
        m = m+(i*i*i);
        printf(" %d^3 +",i);
      }
      else
      {
        m = m+(i*i);
        printf(" %d^2 +",i);
      }
    }
    if(n%2==0)
    {
      m = m+(n*n*n);
      printf(" %d^3 ",i);
    }
    else
    {
      m = m+(n*n);
      printf(" %d^2 ",i);
    }
    printf("= %d ",m);
    return 0;
}
