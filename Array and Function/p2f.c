//2. WAP of Addition, Subtraction, Multiplication and Division using Switch 
#include<stdio.h>
main()
{
	float a,b,c;
	char operator;
		printf("enter operator (+,-,*,/):");
	scanf("%c",&operator);
	printf("enter a:");
	scanf("%d",&a);
		printf("enter b:");
	scanf("%d",&b);

	switch(operator)
	{
	
		case '+':
			c=a+b;
			printf("\n%f+%f=%f",a,b,c);
			break;
				case '-':
			c=a-b;
			printf("\n%f-%f=%f",a,b,c);
			break;
				case '*':
			c=a*b;
			printf("\n%f*%f=%f",a,b,c);
			break;
					case '/':
			c=a/b;
			printf("\n%f/%f=%f",a,b,c);
			break;
			default:
				printf("invalid");
				break;
			}
	
	
}
