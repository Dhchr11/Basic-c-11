//8-1
#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[], char rev[]) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len; i++) 
	{
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    reverseString(str, rev);

    printf("Reversed string: %s\n", rev);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}


