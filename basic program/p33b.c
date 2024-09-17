//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3) 
#include<stdio.h>
void main() 
{
   int N,a,b,c;
   printf("enter N:");
   scanf("%d",&N);
   // N^1 = a
   a = (pow(N,1));
   // N^2 = b
   b = (pow(N,2));
   // N^3 = c
   c = (pow(N,3));
   printf("N^1 = %d\n",a);
   printf("N^2 = %d\n",b);
   printf("N^3 = %d",c);
   
}     
