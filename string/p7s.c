//7. Write a program in C to copy one string to another string.
#include<stdio.h>
main()
{
	char a[5],b[5];
	printf("enter string:");
	gets(a);
	strcpy(b,a);
	printf("string number 2 is:%s",b);

}
