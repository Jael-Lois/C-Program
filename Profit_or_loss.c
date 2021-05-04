#include<stdio.h>

int main()

{
    //P=SP-CP
    //CP = SP-P
    //SP = CP+P
    //L=CP-SP
    //SP = CP-L
    //CP = L+SP
    float p,l,cp,sp;
    int ch;
    printf("\n*******************\n");
    printf("To find Profit                  : 1");
    printf("\nTo find Loss                  : 2");
    printf("\nTo find cost price(profit)    : 3");
    printf("\nTo find selling price(profit) : 4");
    printf("\nTo find cost price(loss)      : 5");
    printf("\nTo find selling price(loss)   : 6");
    printf("\n*******************\n");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
              printf("\nEnter the value for selling price : ");
              scanf("%f",&sp);
              printf("\nEnter the value for cost price : ");
              scanf("%f",&cp);
              p = sp-cp;
              printf("\n Profit : %.3f",p);
              break;
      case 2:
              printf("\nEnter the value for cost price : ");
              scanf("%f",&cp);
              printf("\nEnter the value for selling prince : ");
              scanf("%f",&sp);
              l = cp-sp;
              printf("\n Loss : %.3f",l);
              break;
      case 3:
              printf("\nEnter the value for selling prince : ");
              scanf("%f",&sp);
              printf("\nEnter the value for profit : ");
              scanf("%f",&p);
              cp = sp-p;
              printf("\n Cost price : %f",cp);
              break;
      case 4:
              printf("\nEnter the value for cost prince : ");
              scanf("%f",&cp);
              printf("\nEnter the value for profit : ");
              scanf("%f",&p);
              sp = cp+p;
              printf("\n Cost price : %f",sp);
              break;
      case 5:
              printf("\nEnter the value for selling prince : ");
              scanf("%f",&sp);
              printf("\nEnter the value for loss : ");
              scanf("%f",&l);
              cp = l+sp;
              printf("\n Cost price : %f",cp);
              break;
      case 6:
              printf("\nEnter the value for cost prince : ");
              scanf("%f",&sp);
              printf("\nEnter the value for loss : ");
              scanf("%f",&l);
              sp = cp-l;
              printf("\n Cost price : %f",sp);
              break;
    }
    return 0;
}
