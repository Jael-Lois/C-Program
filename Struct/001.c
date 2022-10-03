#include<stdio.h>
#include<math.h>
int main()
{

  int q,w,e;//local variable
  struct quadratic
  {
    int a;
    int b;
    int c;
  } qua1,qua2;

  printf("Enter the first quadratic equation no. : ");
  scanf("%d%d%d",&qua1.a,&qua1.b,&qua1.c);
  printf("\n\n%dx^2+%dx+%d",qua1.a,qua1.b,qua1.c);

  printf("\nEnter the second quadratic equation no. : ");
  scanf("%d%d%d",&qua2.a,&qua2.b,&qua2.c);
  printf("\n%dx^2+%dx+%d",qua2.a,qua2.b,qua2.c);

  //Add
  q = qua1.a + qua2.a;
  w = qua1.b + qua2.b;
  e = qua1.c + qua2.c;

  printf("\n\nTherefore the addition of the two equation is %dx^2+%dx+%d ",q,w,e);

return 0;
}
