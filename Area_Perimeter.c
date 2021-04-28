#include<stdio.h>

int main()
    
{
    
    float velocity,speed,distance,displacement,time;
    
    int ch;
    
    Begin:
    
    printf("\n\n\n\n***********************************************\n");
    
    printf("To find velocity         : 1\n");
    
    printf("To find displacement     : 2\n");
    
    printf("To find time (velocity)  : 3\n");
    
    printf("To find speed            : 4\n");
    
    printf("To find distance         : 5\n");
    
    printf("To find time (speed)     : 6\n");
    
    printf("Exit                     : 7\n");
    
    printf("***********************************************\n");
    
    printf("\n\nEnter your problem number : ");
    
    scanf("%d",&ch);
    
    switch(ch)
        
    {
            
      case 1:
            
              printf("\nEnter the value for displacment : ");
            
              scanf("%f",&displacement);
            
              printf("\nEnter the value for time : ");
            
              scanf("%f",&time);
            
              velocity = displacement/time;
            
              printf("\n Velocity : %.4f",velocity);
            
              break;
            
      case 2:
            
              printf("\nEnter the value for velocity : ");
            
              scanf("%f",&velocity);
            
              printf("\nEnter the value for time : ");
            
              scanf("%f",&time);
            
              displacement = velocity*time;
            
              printf("\n Displacement : %.4f",&displacement);
            
              break;
            
      case 3:
            
              printf("\nEnter the value for displacment : ");
            
              scanf("%f",&displacement);
            
              printf("\nEnter the value for velocity : ");
            
              scanf("%f",&velocity);
            
              time = displacement/velocity;
            
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
      case 5:
            
              printf("\nEnter the value for speed : ");
            
              scanf("%f",&speed);
            
              printf("\nEnter the value for time : ");
            
              scanf("%f",&time);
            
              distance = speed*time;
            
              printf("\n Distance : %.4f",distance);
            
              break;
            
      case 6:
            
              printf("\nEnter the value for distance : ");
            
              scanf("%f",&distance);
            
              printf("\nEnter the value for speed : ");
            
              scanf("%f",&speed);
            
              time = distance/speed;
            
              printf("\n Time : %.4f",time);
            
              break;
            
      case 7:
            
              break;
            
      default:
            
              printf("Enter the number between 1 to 7");
            
}
    
    if (ch !=7)
        
    goto Begin;
    
    return 0;
    
}
