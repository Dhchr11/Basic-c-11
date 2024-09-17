//8. Write a program in C to count the total number of vowels or consonants in a string. 
#include <stdio.h>
main()
{
    char a[50];
    int i, len, vowel, consonant;
    printf("Enter any string: ");
    gets(a);

    vowel = 0;
    consonant = 0;
    len = strlen(a);

    for(i=0; i<len; i++)
    {
        if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
        {
            if(a[i] =='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || 
               a[i] =='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
                vowel++;
            else
                consonant++;
        }
    }
    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);
}
