// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int ch;
    printf("***************************************************************************");
    printf("\nsquare         : 1");
    printf("\nrectangle      : 2\n");
    printf("***************************************************************************");
    printf("\n enter your choice");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1: int s1;
                printf("enter the side of the squre :");
                scanf("%d",&s1);
                printf("\n area = %d",s1*s1);
                printf("\n perimeter = %d", 4*s1);
                break;
        case 2: int l,b;
                printf("\n enter the length and bredth of a rectangle :");
                scanf("%d",&l);
                scanf("%d",&b);
                printf("\n area = %d ",l*b);
                printf("")
    }
    
    return 0;
}
