//WAP to take 10 no. Input from user find out below values 
#include<stdio.h>
main()
{
	int i,n,osum=0,esum=0;
	for(i=1;i<=10;i++)
	{
		printf("\nenter the n:");
		scanf("%d",&n);
	
		//a. How many Even numbers are there 
		if(n%2==0)
		{
			esum=esum+i;
			printf("\neven number");
			printf("\neven number sum is %d",esum);
		}
		//b. How many odd numbers are there 
       else
	   {
	 				osum=osum+i;

	 	    printf("\nodd number");
	 	    printf("\nodd number sum is %d",osum);
			 }	
			 //c. Sum of even numbers 
			 
	}
	
}
