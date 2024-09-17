#include<stdio.h>
main()
{
	int salary,insurance_premium,loan;
	printf("enter the monthly salary:");
	scanf("%d",&salary);
	 insurance_premium=salary*10/100;
	 
	 printf("insurance premium is %d", insurance_premium);
	 loan=salary*10/100;
	 printf("\nloan is %d",loan);
}
