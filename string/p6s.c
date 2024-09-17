//6. Write a program in C to count the total number of alphabets, digits and special characters in a string. 
#include <stdio.h>
main()
{
  char a[50];
  int chars = 0, digits = 0, spec_chars = 0, i;

  printf("Enter string: ");
  gets(a);
  for (i = 0; a[i] != '\0'; i++)
  {
    if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
      chars++;
    else if (a[i]>='0' && a[i]<='9')
      digits++;
    else
      spec_chars++;
  }

  printf("\nNumber of alphabets: %d\n", chars);
  printf("Number of digits: %d\n", digits);
  printf("Number of special characters: %d\n", spec_chars);
}
