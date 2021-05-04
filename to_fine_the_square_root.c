#include<stdio.h>
#include<math.h>
int main()
{
  float num1,num2,n;
  Begin:
  printf("\n\nEnter a number to find it's square root : ");
  scanf("%f",&num2);
  num1 = (sqrt(num2));
  printf("\nTHE SQUARE ROOT OF THE NUMBER %.2f IS : %f ",num2,num1);
  goto Begin;
  return 0;
}
