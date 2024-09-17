//23. WAP to calculate swap 2 numbers with using of multiplication and division. 
#include<stdio.h>
main()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
		printf("enter b:");
			scanf("%d",&b);
			printf("\nbefore swapping value of a is %d",a);
			printf("\nbefore swapping value of b is %d",b);
			a=a*b;
			b=a/b;
			a=a/b;
			printf("\nafter swapping value of a is %d",a);
			printf("\nafter swapping value of b is %d",b);	
}
