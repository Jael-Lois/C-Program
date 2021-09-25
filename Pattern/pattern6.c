#include<stdio.h>
int main()
{
  int n,i,j;
  printf("Enter the value for the pattern :");
  scanf("%d",&n);

  int space = n-1, star = 1, space_count, star_count;

  for(i=1;i<=n;i++)
  {
    space_count = 0;
    star_count = 0;

    for(j=1;j<=n*2-1;j++)
    {
      if (space_count < space) {printf("   "); space_count++;}
      else if(star_count < star) {printf(" * "); star_count++; }
      else {printf(" ");}
    }

    printf("\n");
    space -= 1;
    star += 2;
  }
  return 0;
}
