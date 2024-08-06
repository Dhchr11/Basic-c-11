//13. Write a program in C to remove characters from a string except alphabets. 
#include <stdio.h>

removeNonAlphabets(char str[]) 
{
    int i, j = 0;
    char temp[100]; 
    for (i = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i])) 
		{
            temp[j++] = str[i];
        }
    }

    temp[j] = '\0'; 
    for (i = 0; temp[i] != '\0'; i++) 
	{
        str[i] = temp[i];
    }
    str[i] = '\0';
}

int main() {
	
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
	{
        str[len - 1] = '\0';
    }
    removeNonAlphabets(str);
    printf("String after removing non-alphabet characters: %s\n", str);
}


