// WAP to print Fibonacci series up to given numbers 
#include<stdio.h>
main()
{
	int i,n,a=0,b=1,c;    //fibonaci series sum of two integer
	                      //0,1,1,2,3,5,8,13,21,34.
	     printf("enter n:");
	     scanf("%d",&n);
	     for(i=1;i<=n;i++)
	     {
	     	printf("\n%d",a);
	     	c=a+b; //a=0,b=1,c=1
	     	a=b;//a=1,b=1         
	     	b=c;//b=1
		 }
	              
	        
	        
	
}
