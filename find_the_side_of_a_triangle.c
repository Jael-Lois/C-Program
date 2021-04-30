#include<stdio.h>
#include<stdio.h>
int main() 
{
    int a,b,c,ch;
    Begin:
    printf("\n************************************\n");
    printf("To find a       : 1");
    printf("\nTo find b     : 2");
    printf("\nTo find c     : 3");
    printf("\n************************************\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                printf("\nEnter c : ");
                scanf("%d",&c);
                printf("\nEnter b : ");
                scanf("%d",&b);
                a = (sqrt((c*c)-(b*b)));
                printf("\nThe side of a is %d",a);
        case 2:
                printf("\nEnter c : ");
                scanf("%d",&c);
                printf("\nEnter a : ");
                scanf("%d",&b);
                b = (sqrt((c*c)-(a*a)));
                printf("\nThe side of b is %d",b);
        case 3:
                printf("\nEnter a : ");
                scanf("%d",&a);
                printf("\nEnter b : ");
                scanf("%d",&b);
                 c = (sqrt((a*a)+(b*b)));
                printf("\nThe side of c is %d",c);  
    }
    return 0;
}
