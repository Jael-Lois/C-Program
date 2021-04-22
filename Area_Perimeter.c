int main() {
    int ch,s1,s2,s3,s4,d,h;
    begin: 
    printf("\n*************************************");
    printf("\nSquare              : 1");
    printf("\nRectangle           : 2");
    printf("\nEqulateral triangle : 3");
    printf("\nQuadrilateral       : 4");
    printf("\nParallelogram       : 5");
    printf("\nTrapezium           : 6");
    printf("\nExit                : 7\n");
    printf("\n***********************************\n");
    printf("\n Enter your choice");
    scanf("%d", &ch);
    printf("\n***********************************************************\n");
    
    switch(ch)
    {
        case 1: 
                printf("Enter the side of the square :");
                scanf("%d",&s1);
                printf("\n Area = %d",s1*s1);
                printf("\n Perimeter = %d \n", 4*s1);
                break;
        case 2: 
                printf("\n Enter the length and bredth of a rectangle :");
                scanf("%d",&s1);
                scanf("%d",&s2);
                printf("\n Area = %d ",s1*s2);
                printf("\n Perimeter = %d \n",2*(s1+s2));
               break;
        case 3: 
                printf("\nEnter the side of the equilateral triangle :");
                scanf("%d",&s1);
                printf("\n Area = %f",(1.732/4)*s1*s1);
                printf("\n Primeter = %d \n",3*s1);
                break;
                
        case 4:
                printf("Enter the sides of the quadrilateral : \n");
                printf("Enter the diagonal of the quadrilateral : \n");
                scanf("%d",&s1);
                scanf("%d",&s2);
                scanf("%d",&s3);
                scanf("%d",&s4);
                scanf("%d",&d);
                printf("\n Area = %f \n",1/2.0*d*s1*s2);
                printf("\n Primeter = %d \n",s1+s2+s3+s4);
                break;
        
        case 5:
                printf("Enter the base of the parallelogram : \n");
                printf("Enter the height of the parallelogram : \n");
                scanf("%d",&s1);
                scanf("%d",&s2);
                printf("\nArea = %d \n",s1*s2);
                printf("\nPerimeter = %d \n",2*(s1+s2));
                break;
                
                
        case 6:
                printf("Enter the height of the trapezium : \n");
                scanf("%d",&h);
                printf("Enter the 2 parallel sides of the trapezium : \n");
                scanf("%d",&s1);
                scanf("%d",&s2);
                printf("enter the other other sides of the trapezium : \n");
                scanf("%d",&s3);
                scanf("%d",&s4);
                printf("\n Area = %f",1/2.0*h*(s2+s3));
                printf("\n Perimeter = %d",s1+s2+s3+s4);
                break;
                
        case 7:
                break;
                
                
        default:
               printf("\n please enter values 1 & 7 \n");
    } 
    if (ch !=7)
        goto begin;
        
    
    return 0;
}
