//4.Write a program in C to combine two strings 
#include<stdio.h>
main()
{
	char a[4],b[4];
	printf("enter string 1:");
	gets(a);
	printf("enter string 2:");
	gets(b);
	printf("merge string is:%s",strcat(a,b));
}


