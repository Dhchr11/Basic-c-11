#include<stdio.h>
main()
{
	char fname[20],mname[20],lname[20];
	printf("enter first name,middle name,last name:");
	scanf("%s%s%s",&fname,&mname,&lname);
	printf("abbrivation form:");
	printf("%c.%c. %s",fname[0],mname[0],lname);
}
