// Question 3 (a)	WAP to print ASCII value of given character (numeric, alphabet, alpha- numeric).
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The ASCII value of %c = %d", ch, ch);
    return 0;
}

//  Question 3 (b) WAP to print character of given ASCII value. 	
#include <stdio.h>
int main()
{   
    int ch;
    printf("Enter a number: ");
    scanf("%d", &ch);
    printf("The character for given ASCII value = %c", ch);
    return 0;
}
