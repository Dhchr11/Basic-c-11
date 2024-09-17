//C Program to Reverse a Number Using FOR Loop 
#include<stdio.h>
main()
{
	int n,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	for (n!=0)
	{
	
	rev=rev*10+n%10;
	n=n/10;
}
printf("reverse number is %d",rev);
}
