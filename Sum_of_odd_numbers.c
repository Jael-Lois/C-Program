#include<stdio.h>

#include<math.h>

int main()

{
  int n,i,m;
  printf("\nThe sum of odd numbers you want to know : ");
  scanf("%d",&n);
  m=0;
  for(i=1;i<=n;i=i+2)
  {
      m = ((i+1)/2)*((i+1)/2);
  }
  printf("\n_____________________________________");
  printf("\n  %d - is the answer ",m);
  printf("\n_____________________________________");
  return 0;
}
