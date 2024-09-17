// 1. Write a program in C to find the length of a string without using library functions. 
#include<stdio.h>
main()
{
	char a[4],i;
	int len=0;
	printf("enter string:");
	gets(a);
	for(i=0;i!='\0';i++)
	{
		len++;
	}
	printf("\n length is:%d",len);
}
