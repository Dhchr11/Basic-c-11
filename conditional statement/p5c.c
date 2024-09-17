// WAP to print factorial of given number
#include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	fact=fact*i;
   }
   printf("\nfact is %d", fact);
}
