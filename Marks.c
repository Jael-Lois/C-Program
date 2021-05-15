/*Write a C program to input marks of four subjects Physics, Chemistry, Biology, Mathematics. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/
#include<stdio.h>
#include<math.h>
int main()
{
  int marks,p,c,b,m;
  Begin:
  printf("\n*****************************************************************");
  printf("\nEnter your percentage for Physics : ");
  scanf("%d",&p);
  if(p>=90)
  printf("\n\nYour grade is A");
  else if(p>=80)
  printf("\n\nYour grade is B");
  else if(p>=70)
  printf("\n\nYour grade is C");
  else if(p>=60)
  printf("\n\nYour grade is D");
  else if(p>=50)
  printf("\n\nYour grade is E");
  else
  printf("\n\nYour grade is F");
  printf("\n*****************************************************************");
  printf("\n*****************************************************************");
  printf("\n\nEnter your percentage for Chemistry : ");
  scanf("%d",&c);
  if(c>=90)
  printf("\n\nYour grade is A");
  else if(c>=80)
  printf("\n\nYour grade is B");
  else if(c>=70)
  printf("\n\nYour grade is C");
  else if(c>=60)
  printf("\n\nYour grade is D");
  else if(c>=50)
  printf("\n\nYour grade is E");
  else
  printf("\n\nYour grade is F");
  printf("\n*****************************************************************");
  printf("\n*****************************************************************");
  printf("\n\nEnter your percentage for Biology : ");
  scanf("%d",&b);
  if(b>=90)
  printf("\n\nYour grade is A");
  else if(b>=80)
  printf("\n\nYour grade is B");
  else if(b>=70)
  printf("\n\nYour grade is C");
  else if(b>=60)
  printf("\n\nYour grade is D");
  else if(b>=50)
  printf("\n\nYour grade is E");
  else
  printf("\n\nYour grade is F");
  printf("\n*****************************************************************");
  printf("\n*****************************************************************");
  printf("\n\nEnter your percentage for Math : ");
  scanf("%d",&m);
  if(m>=90)
  printf("\n\nYour grade is A");
  else if(m>=80)
  printf("\n\nYour grade is B");
  else if(m>=70)
  printf("\n\nYour grade is C");
  else if(m>=60)
  printf("\n\nYour grade is D");
  else if(m>=50)
  printf("\n\nYour grade is E");
  else
  printf("\n\nYour grade is F");
  printf("\n*****************************************************************");
  printf("\n*****************************************************************");
  marks = p+c+b+m;
  printf("\nYour total score is %d",marks);
  printf("\n*****************************************************************");
  goto Begin;
  return 0;
}
