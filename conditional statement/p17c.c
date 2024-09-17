//17. Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
main()
{
	int i=1,n;
	while(i<=5)
	{
		i++;
		printf("\nenter n:");
		scanf("%d",&n);
			if(n%2==0)
	{
		printf("\neven");
	}
	else
	{
		printf("\nodd");
	}
	}

}
