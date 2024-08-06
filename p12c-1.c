//12. Program of Armstrong Number in C Using For Loop 
#include<stdio.h>
main()
{
	int n,r,arm=0,c;
	printf("enter a number:");
	scanf("%d",&n);
	for(n>0;n=c;r=n%10)
	{
		r=arm+r*r*r;
	}
	if(c==arm)
	{
		printf("armstrog number");
	}
	else
	{
		printf("not armstrog number");
	}
}
