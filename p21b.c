#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter before swap a is %d\n",a);
	printf("enter before swap b is %d\n",b);
	temp=a;//a=1 b=2
	a=b; 
	b=temp;
	printf("after swap value a is %d\n",a);
	printf("after swap value b is %d\n",b);
	       
}
