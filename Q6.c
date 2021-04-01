// Question 6 (a) WAP to convert decimal number to binary number.
#include <stdio.h>
int main()
{ 
    int arr[10], n, i;
    printf("Enter the decimal number: ");
    scanf("%d", &n);
    for(i=0; n>0; i++)
    {
        arr[i]=n%2;
        n/=2;
    }
    printf("Binary of given number = ");
    for(i=i-1; i>=0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
// Question 6 (b) WAP to convert binary number to decimal number.
#include <stdio.h>
int main()
{   
    int  num, binary_val, decimal_val = 0, base = 1, rem;
    printf("Enter a binary number:");
    scanf("%d", &num); 
    binary_val = num;
    while (num > 0) 
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("The decimal equivalent = %d \n", decimal_val);
    return 0;
}
// Question 6 (c) WAP to convert octal number to decimal number.
// Question 6 (d)	WAP to convert binary number to octal number.
