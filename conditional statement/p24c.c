// 24. 1 + 2 + 3 + 4 + 5 + ... + n 
#include<stdio.h>
 main()
{
	int i,n,sum=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum is %d",sum);
	
}

