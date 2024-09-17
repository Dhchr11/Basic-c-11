//16.Accept 5 numbers from user and perform sum of array 
#include<stdio.h>
main()
{
	int i,a[5],sum=0;
	for(i=1;i<=5;i++)
	{
		printf("enter element:");
		scanf("%d",&i);
		sum=sum+a[i];
		printf("sum is %d",sum);
		
	}
}
