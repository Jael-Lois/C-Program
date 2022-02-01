#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()

{
  char name[100];


  printf("\nEnter you first name: ");
  scanf("%[^\n]s",name);

  int vowel,l,i;

  vowel = 0;

  l = strlen(name);

  for(i=0;i<l;i++)
  {
    switch (tolower(name[i]))
      {

      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
       vowel++;
     }
   
  }
  printf("\nThe number of vowels in the name are %d",vowel);

  return 0;
}
