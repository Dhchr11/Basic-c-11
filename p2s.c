//2. Write a program in C to separate individual characters from a string. 
#include <stdio.h>
main() 
{
   char a[90]=" ";
    int l=0;
    printf("enter a string:");
    scanf("%s",a);
    while (a[l]!='\0')
	{
        printf("%c ",a[l]);
        l++;
    }
}

