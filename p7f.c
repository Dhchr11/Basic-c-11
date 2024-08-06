//7. WAP Find out length of string without using inbuilt function 
#include<stdio.h>
main()
{
	char a[4],i,len=0;
	printf("enter string:");
	gets(a);
	for(i=0;i!='\0';i++)
	{
		len++;
	}
	printf("\n ;ength is:%d",len);
}
