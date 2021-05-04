#include<stdio.h>
#include<math.h>
int main()
{
    //TSA = (6*S*S)
    //LSA = (4*S*S)
    //V = S*S*S
    //LDF = (SQRT 2)*S
    //LD = (SQRT 3)*S
    float s,t;
    int ch;
    Begin:
    printf("\n\n*********************************");
    printf("\n\nTo find total surface area of the cube            : 1");
    printf("\n\nTo find lateral surface area of the cube          : 2");
    printf("\n\nTo find volume of the cube                        : 3");
    printf("\n\nTo find length of diagonal of face of the cube    : 4");
    printf("\n\nTo find length of diagonal of the cube            : 5");
    printf("\n\n*********************************");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
              printf("\nEnter a value for a side : ");
              scanf("%f",&s);
              t = 6*s*s;
              printf("\n TOTAL SURFACE AREA : %.5f",t);
              break;
      case 2:
              printf("\nEnter a value for a side : ");
              scanf("%f",&s);
              t = 4*s*s;
              printf("\n LATERAL SURFACE AREA : %.5f",t);
              break;
      case 3:
              printf("\nEnter a value for a side : ");
              scanf("%f",&s);
              t = s*s*s;
              printf("\n TOTAL SURFACE AREA : %.5f",t);
              break;
      case 4:
              printf("\nEnter a value for a side : ");
              scanf("%f",&s);
              t = (sqrt (2))*s;
              printf("\n LENGTH OF DIAGONAL OF FACE OF THE CUBE : %.5f",t);
              break;
      case 5:
              printf("\nEnter a value for a side : ");
              scanf("%f",&s);
              t = (sqrt(3))*s;
              printf("\n LENGTH OF DIAGONAL OF THE CUBE : %.5f",t);
              break;
      case 6:
              break;
    }
    if(ch!=6)
    goto Begin;
    return 0;
}
