#include<stdio.h>

int main()
{
    //v=dis/tim
    //speed=dist/time
    float velocity,speed,distance,displacement,time;
    int ch;
    printf("***********************************************\n");
    printf("To find velocity         : 1\n");
    printf("To find displacement     : 2\n");
    printf("To find time (velocity)  : 3\n");
    printf("To find speed            : 4\n");
    printf("To find distance         : 5\n");
    printf("To find time (speed)     : 6\n");
    printf("***********************************************\n");
    printf("\n\nEnter your problem number : ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
              printf("\nEnter the value for displacment : ");
              scanf("%f",&displacment);
              printf("\nEnter the value for time : ");
              scanf("%f",&time);
              velocity = displacment/time;
              printf("\n Velocity : %f",velocity);
              break;
      case 2:
              printf("\nEnter the value for velocity : ");
              scanf("%f",&velocity);
              printf("\nEnter the value for time : ");
              scanf("%f",&time);
              displacment = velocity*time;
              printf("\n Displacement : %f",&displacment);
              break;
      case 3:
              printf("\nEnter the value for displacment : ");
              scanf("%f",&displacment);
              printf("\nEnter the value for velocity : ");
              scanf("%f",&velocity);
              time = displacment/velocity;
              printf("\n Time : %.4f",time);
              break;
      case 4:
              printf("\nEnter the value for distance : ");
              scanf("%f",&distance);
              printf("\nEnter the value for time : ");
              scanf("%f",&time);
              speed = distance /time;
              printf("\n Speed : %.4f",speed);
              break;
      
    }
    return 0;
    
}

