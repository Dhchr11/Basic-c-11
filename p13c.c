//13.calculate the Factorial of a Given Number using while loop 
// WAP to print factorial of given number
#include<stdio.h>
main()
{
	int n,fact=1,i;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
	fact=fact*i;
	i++;
}
	  printf("\nfact is %d", fact);
}
