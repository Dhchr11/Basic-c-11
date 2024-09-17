//Accept 5 expense from user and find average of expense 
#include<stdio.h>
main()
{
	int e1,e2,e3,e4,e5,sum;
	float avg;
	
	printf("enter e1:");
	scanf("%d",&e1);
		printf("enter e2:");
	scanf("%d",&e2);
		printf("enter e3:");
	scanf("%d",&e3);
		printf("enter e4:");
	scanf("%d",&e4);
		printf("enter e5:");
	scanf("%d",&e5);
	sum=e1+e2+e3+e4+e5;
	avg=sum/5;
	printf("avg is %f",avg);	
}
