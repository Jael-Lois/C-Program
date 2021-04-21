#include<stdio.h>

int main() {
    int ch,s1,l,b;
    begin: 
    printf("***************************************************************************");
    printf("\nsquare         : 1");
    printf("\nrectangle      : 2");
    printf("\nexit           : 3\n");
    printf("\n***************************************************************************\n");
    printf("\n enter your choice");
    scanf("%d", &ch);
    printf("\n***************************************************************************\n");
    
    switch(ch)
    {
        case 1: 
                // int s1;
                printf("enter the side of the square :");
                scanf("%d",&s1);
                printf("\n area = %d",s1*s1);
                printf("\n perimeter = %d \n", 4*s1);
                break;
        case 2: 
               // int l,b;
                printf("\n enter the length and bredth of a rectangle :");
                scanf("%d",&l);
                scanf("%d",&b);
                printf("\n area = %d ",l*b);
                printf("\n perimeter = %d \n",2*(l+b));
               break;
        case 3: 
                break;
        default:
               printf("\n please enter values 1 & 2");
    } 
    if (ch !=3)
        goto begin;
        
    
    return 0;
}
