#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter before swap a is %d",a);
	printf("enter before swap b is %d",b);
	 temp=a;//a=10 so temp=10
	a=b;    //b=20 so a=20,temp=10
	b=temp;//
	printf("\nenter the after swap value a is %d",a);
		printf("\nenter the after swap value b is %d",b);
	       
}
