//1.Write a program to find out the max number from given array using function 
#include <stdio.h>

Max(int a[], int n) //parameter //function
{
    int i, max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) 
		{
            max = a[i];
        }
    }
    printf("\nMaximum element is %d", max);
}

main() 
{
    int a[5], i;

    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);//1,2,3,4,5
        scanf("%d", &a[i]);
    }
    Max(a, 5);
}

		
			
			
		
	
	

