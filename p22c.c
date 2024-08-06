//22. Accept 3 numbers from user using while loop and check each numbers palindrome 
//121=121 read backward same
#include <stdio.h>

main() {
    int num, reversedNum = 0, originalNum;  

    printf("Input a number: ");
    scanf("%d", &num);  
    originalNum = num;  

    // Start a while loop to reverse the digits of the number
    while (num != 0) {
        int remainder= num%10;  
        reversedNum =reversedNum *10+remainder;  
        num=num/10;  
    }

    
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
}
	


