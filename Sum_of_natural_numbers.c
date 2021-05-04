#include <stdio.h>

int main() {
    int i,n,m;
    printf("Enter the n : ");
    scanf("%d",&n);
    printf("\nThe sum of %d natural number :",n);
    for(i=1,m=0;i<=n;i++)
    m=m+i;
    printf("%d",m);
    printf("\nThe sum of %d using formula is : ",n);
    m= (n*(n+1))/2.0;
    printf("%d",m);
    return 0;
}
