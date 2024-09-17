//find the area of a rectangular 
#include<stdio.h>
main()
{
	int l,w,h,c;
	printf("enter l:");
	scanf("%d",&l);
	printf("enter w:");
	scanf("%d",&w);
	printf("enter h:");
	scanf("%d",&h);
	c=2*(w*l+h*l+h*w);
	printf("c is %d",c);
}
