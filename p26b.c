//26.Convert temperature Fahrenheit to Celsius 
#include<stdio.h>
main()
{
	float F,C;
	printf("enter farenhit:");
	scanf("%f",&F);
	C= (F-32)*5/9; 
	printf( "c is %f",C);
}
