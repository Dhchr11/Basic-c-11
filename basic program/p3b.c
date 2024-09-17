#include<stdio.h>
main()
{
	float a,c,r,pi=3.14;
	
	printf("enter r of circle:");
    scanf("%f",&r);
	//circumference of circle
	c=2*pi*r;
	printf("c is %f",c);	
	//area of circle
	a=pi*r*r;
	printf("\n a is %f",a);
}
