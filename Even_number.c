#include <stdio.h>

int main() {
    int i,n,m;
    printf("Enter the number of even numbers that you wanted to know : ");
    scanf("%d",&n);
    printf("\nThe number of even numbers %d :",n);
    for(i=1,m=2;i<=n;i++,m = m+2)
    printf("\n                                                       %d\n",m);
    return 0;
}
