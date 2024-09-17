//4. WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int i,n,table;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\ni is %d",i);
		table=n*i;
		printf("\n =%d",table);
	}
}
