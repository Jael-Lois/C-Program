#include<stdio.h>
#include<math.h>

  int main()
{
        float a,b,c;

        printf("Enter the value for a : ");

        scanf("%f",&a);

        printf("\nEnter the value for b : ");

        scanf("%f",&b);

        printf("\nEnter the value for c : ");

        scanf("%f",&c);

        if ((b*b)-(4*a*c)==0)
        {
          printf("the roots are %.2f",-b/(2*a));
          printf(" the roots are equal");
        }
        else if ((b*b)-(4*a*c)<0)
        {
           printf("The value of x is %.2f + %.2fi",(-b/(2*a)),sqrt((4*a*c)-b*b));
           printf("\n\nThe value of x is %.2f - %.2fi",(-b/(2*a)),sqrt((4*a*c)-b*b));
           printf("\n\nThe roots are imaginary.");
         }
        else
        {
           printf("The value of x is %.2f",(-b+sqrt(b*b-4*a*c))/2*a);
           printf("\n\nThe value of x is %.2f",(-b-sqrt(b*b-4*a*c))/2*a);
           printf("\n\nThe roots are distinct.");
         }
      return 0;

}
