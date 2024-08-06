//12. Program of Armstrong Number in C Using While Loop 
#include<stdio.h>
main()
{
	//armstrong number number means 153=1^3+5^3+3^3
	int n,r,arm=0,c;//r=reminder
	printf("enter a number:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		arm=r*r*r+arm;
		n=n/10;
		
}
	if(c==arm)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}

}

