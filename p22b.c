//Formula= A = Amount= P(1 + R/100)t 
//A is the final amount. P is the principal amount. r is the annual interest rate (decimal) n is the
//number of times interest is compounded per year (12 for monthly)
#include<stdio.h>
main()
{
	
	float r,t,p;

	printf("enter the principal amount p:");
	scanf("%f",&p);
	printf("enter annual interest r:");
	scanf("%f",&r);
	printf("enter the compound per year t:");
	scanf("%f",&t);
	 float amount=p*(1+r/100)*t;
	printf("the amount is %f\n",amount);
	
	 float cinterest=amount-p;
	
	printf("compound interest is %f\n",cinterest);
}
