// Question 8 (a)	WAP to create simple calculator using Switch Case.
#include <stdio.h>
int main() 
{   
    char operator;
    int a,b;
    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);

    switch (operator) 
    {
    case '+': printf("%d + %d = %d", a, b, a+b);
              break;
    case '-': printf("%d - %d = %d", a, b, a-b);
              break;
    case '*': printf("%d * %d = %d", a, b, a*b);
              break;
    case '/': printf("%d * %d = %d", a, b, a/b);
              break;
    default: printf("Error! operator is not correct");
    }
    return 0;
} 

// Question 8 (b)	WAP to read weekday number and print Weekday name using Switch Case.
#include <stdio.h>
int main() 
{  
    int month, days;
    printf("Enter the month(1-12): ");
    scanf("%d", &month);
    printf("Number of days: ");
    switch(month)
    {
        case 1: printf("31 days"); break; 
        case 2: printf("28 days"); break; 
        case 3: printf("31 days"); break;
        case 4: printf("30 days"); break;
        case 5: printf("31 days"); break; 
        case 6: printf("30 days"); break; 
        case 7: printf("31 days"); break;
        case 8: printf("31 days"); break; 
        case 9: printf("30 days"); break; 
        case 10: printf("31 days"); break;
        case 11: printf("30 days"); break;
        case 12: printf("31 days"); break;
        default: printf("Invalid input.");
    }
return 0;
}

// Question 8 (c)	WAP to find number of days in a month using Swich Case.
#include <stdio.h>
int main() 
{  
    int dayno;
    char day;
    printf("Enter day number(1-7): ");
    scanf("%d", &dayno);
    switch(dayno)
    {
        case 1: printf("It's a Monday."); break;
        case 2: printf("It's a Tuesday."); break;
        case 3: printf("It's a Wednesday."); break;
        case 4: printf("It's a Thursday."); break;
        case 5: printf("It's a Friday."); break;
        case 6: printf("It's a Saturday."); break;
        case 7: printf("It's a Sunday."); break;
        default: printf("Invalid entry.");
    }
return 0;
}
