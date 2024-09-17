//3. WAP to find reverse of string using recursion 
#include<stdio.h>
reverseString(char *str) 
{
    int len = strlen(str);
    if (len <= 1) 
	{
        return;
    }
    reverseString(str + 1);//logic
    printf("%c", *str);
}

 main() 
 {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    reverseString(str);
    printf("\n");
}

