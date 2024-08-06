//10. WAP to perform Palindrome number using for loop and function 
#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int original = num;
    int reversed = 0, remainder;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if the reversed number is the same as the original
    return (original == reversed);
}

int main() {
    int num;

    // Input a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}

