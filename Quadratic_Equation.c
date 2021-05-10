#include<stdio.h>

#include<math.h>

int main()

{

  float a,b,c;

  int ch;

  Begin:

  printf("\n****************************************************************************");

  printf("\n\nEnter the value for a : ");

  scanf("%f",&a);

  printf("\nEnter the value for b : ");

  scanf("%f",&b);

  printf("\nEnter the value for c : ");

  scanf("%f",&c);

  if ((b*b)-(4*a*c)==0)

  {

    printf("\nThe root is equal");

    printf("\nThe value of the root is %.2f",-b/(2*a));

  }

  else if ((b*b)-(4*a*c)<0)

  {

    printf("\nThe root is imaginary.");

    printf("\nThe value of the root are %.2f + %.2f i",-b/(2*a),sqrt(4*a*c-b*b)/(2*a));

    printf("\nThe value of the root are %.2f - %.2f i",-b/(2*a),sqrt(4*a*c-b*b)/(2*a));

  }

  else

  {

    printf("\nThe roots are distinct.");

    printf("\nThe value of the root is %.2f",(-b + sqrt((b*b)-(4*a*c)))/(2*a));

    printf("\nThe value of the root is %.2f",(-b - sqrt((b*b)-(4*a*c)))/(2*a));

  }

  printf("\n****************************************************************************");

  printf("\n****************************************************************************");

  printf("\n\nYes : 1");

  printf("\n\nNo  : 0");

  printf("\n\nDo you want to do again : ");

  scanf("%d",&ch);

  printf("\n\n****************************************************************************");

  if(ch==1)

  goto Begin;

  return 0;

}
