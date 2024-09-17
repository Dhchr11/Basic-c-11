//  14.Accept 5 numbers from user and find those numbers factorials 
#include<stdio.h>
main()
{
	int n,fact=1,i,j;
	for(i=1;i<=5;i++)
	{
		printf("enter n:");
		scanf("%d",&n);
	}
	for(j=1;j<=n;j++)
	{
		fact=fact*j;
		printf("\nfact is %d",fact);
	}
}
