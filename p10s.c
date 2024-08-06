//10. Write a program in C to extract a substring from a given string
#include <stdio.h>
void extract_substring(char *str, int start_index, int length, char *substring) {
    int i, j;

    if (start_index < 0 || start_index >= strlen(str)) {
        printf("Invalid start index\n");
        return;
    }

    if (length <= 0 || start_index + length > strlen(str)) {
        printf("Invalid substring length\n");
        return;
    }

    for (i = 0; i < length; i++) 
	{
        substring[i] = str[start_index + i];
    }
    substring[length] = '\0';
}

main() 
{
    char str[100], substring[100];
    int start_index, length;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the start index: ");
    scanf("%d", &start_index);
    printf("Enter the length: ");
    scanf("%d", &length);
    extract_substring(str, start_index, length, substring);

    printf("The extracted substring is: %s\n", substring);
}

