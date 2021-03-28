// Question 2 (a)	WAP to print upper case alphabets 
#include<stdio.h>
int main()
{  
    char ch;
    printf("Uppercase Characters: ");
    for(ch='A'; ch<='Z'; ch++)
    {
        printf("%c ", ch);
    }
 return 0;
}


// Question 2 (b)	WAP to print lower case alphabets(a-z).
#include<stdio.h>
int main()
{
    char ch;
    printf("Lowercase Characters: ");
    for(ch='a'; ch<='z'; ch++)
    {
        printf("%c ", ch);
    }
return 0;
} 


// Question 2 (c) WAP to print consonants and vowels among (a-z).
#include<stdio.h>
int main()
{
    printf("Vowels: \n");
    for( char a = 'a' ; a<= 'z' ; a++ )
    {
        switch(a)
        {
            case 'a':case 'e': case 'i': case 'o': case 'u': 
            printf("%c ",a);
        }
    }
    printf("\nConsonants: \n");
    for(char b = 'a' ; b<= 'z' ; b++ )
    {
        switch(b)
        {
            case 'a':case 'e': case 'i': case 'o': case 'u': 
            break;
            default:
            printf("%c ", b);
        }
    }
    return 0;
}
