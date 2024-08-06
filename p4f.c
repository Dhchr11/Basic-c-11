//4. WAP to find factorial using recursion 
#include<stdio.h>
fact(int n)//with argument with ruturn type
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}
main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("\n fact is %d",fact(n));
}

