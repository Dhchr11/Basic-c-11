//10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5) 
#include<stdio.h>
main()
{
	int n,fdigit,ldigit,sum;
	printf("enter n:");
	scanf("%d",&n);
	ldigit=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fdigit=n;
	sum=ldigit+fdigit;
	printf("%d",sum);
}
