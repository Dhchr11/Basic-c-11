//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 
#include <stdio.h>

main() {
    int num, max_digit = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    


    while (num != 0) {
        digit = num%10; //n=56,56%10=6,6=max digit
        max_digit = (digit > max_digit) ? digit : max_digit;
        num =num/10;//number is 5656/10=5 because int datatype but 6 is bigger
    }

    printf("Maximum digit: %d\n", max_digit);


}



