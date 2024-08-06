//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 
#include<stdio.h>
main()
{
	int n,rev=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
	
	rev=rev*10+n%10;//
	n=n/10;
	

}
printf("reverse number is %d",rev);
}
