// 11. Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa. 
#include <stdio.h>

toggleCase(char str[]) 
{
	int i;
    for (i = 0; str[i]!='\0';i++) 
	{
        if (islower(str[i])) 
		{
            str[i] = toupper(str[i]);
        } 
		else if (isupper(str[i])) 
		{
            str[i] = tolower(str[i]);
        }
    }
}

int main() 
{
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    toggleCase(str);
    printf("Modified sentence: %s\n", str);
}

