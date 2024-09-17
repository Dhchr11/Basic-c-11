 #include<stdio.h>
 main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
	
		for(j=1;j<=i;j++)
		{
		if(j%2==0)
			{
				printf("B");
			}
	
		   else
			{
				printf("A");
			}
		}
			printf("\n");
	}
	
}
