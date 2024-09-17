//16. Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main()
{
	int n,i,sum=0;
	for(i=1;i<=10;i++)
	{
		printf("\nenter n:");
		scanf("%d",&n);
		sum=sum+i;
		printf("\nsum is %d",sum);
	}
}
