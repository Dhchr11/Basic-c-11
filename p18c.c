//18. Write a C Program to Print the Multiplication Table of N  
//E.g. 5 * 1 = 5 ii. 5 * 2 = 10 1. . 2. . iii. 5 * 10 = 50 
#include<stdio.h>
main()
{
	int n,i,table;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("\n%d*%d=%d",n,i,table);
	}
}
