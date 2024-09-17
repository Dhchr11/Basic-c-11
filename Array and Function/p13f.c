//13. WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
main()
{
	int i,a[5];
	for(i=1;i<=5;i++)
	{
		printf("\nenter a elements:");
		scanf("%d",&i);
		if(a[i]%2==0)
		{
			printf("even");
	}
	    else
	    {
	    	printf("odd");
		}
			
		
	}
}
