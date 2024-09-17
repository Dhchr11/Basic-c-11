//3. Write a program in C to print individual characters of a string in reverse order 
#include <stdio.h>
#include <string.h>

 main() 
 {
    char a[50]=" ";
    int l,i ;
    printf("enter a string:");
   fgets (a, sizeof a,stdin);
    l=strlen(a);
    for (i=l; i>=0; i--){
        printf ("%c ",a[i]);
    }
    return 0;
}
