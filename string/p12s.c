//12. Write a program in C to find the number of times a given word 'is' appears in the given string. 

#include <stdio.h>

main() 
{
    char a[100], word[10] = "is";
    int count = 0, i, j, len1, len2;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    len1 = strlen(a);
    len2 = strlen(a);

    for (i = 0; i <= len1 - len2; i++) 
	{
        for (j = 0; j < len2; j++) 
		{
            if (a[i + j] != word[j]) 
			{
                break;
            }
        }
        if (j == len2) 
		{
            count++;
        }
    }
    printf("The word 'is' appears %d times in the string.\n", count);
}
