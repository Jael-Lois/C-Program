#include<stdio.h>

int main()
{
  int h,i,b,m;

  printf("\nEnter the number of values you need : ");

  Begin:

  scanf("%d",&h);

  m = 1;

  int a[h];


  for(i=0;i<h;i++)

  {
    printf("\n\nEnter the %d value : ",m++);

    scanf("%d",&a[i]);

  }

  for(i=0;i<h;i++)

  printf("\n%d\n",a[i] );

  printf("\n*****************************************\n");

  printf("1 : Yes\n2 : No");

  printf("\n*****************************************\n");

  printf("Are these the values you Entered : ");

  scanf("%d",&b);

  if(b=1)
 {

  printf("\nOK.\nHave a nice day");

  goto Begin;
  
 }
  else

  {

    printf("\nI am so sorry");

    printf("\nIn that case you have to play again : ");

    goto Begin;

  }

  return 0;

}
