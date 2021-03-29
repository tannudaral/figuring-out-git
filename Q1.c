// Question 1 (a) (a) WAP to check whether a number (taken from user) is positive or negative.
#include <stdio.h>
int main()
{
    int a;
    printf("ENTER NO TO FIND WHETHER ITS POSITIVE OR NEGATIVE : ");
    scanf("%d", &a);
    if (a>=0)
        printf("NO IS POSITIVE.");
    else printf("NO IS NEGATIVE");
}
// Question 1 (b) WAP to check whether a number (taken from user) is prime or composite.
#include <stdio.h>
int main()
{   
    int i, n, count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
        count+=1;
    }
    if(count==2) 
    printf("The number is prime.");
    else
    printf("The number is composite.");
    return 0;
}
// Question 1 (c) WAP to check whether a number (taken from user) is even or odd.
#include <stdio.h>
int main()
{
    int a;
    printf("ENTER A NO TO FIND WHETHER IT'S EVEN OR ODD : ");
    scanf("%f", &a);
    if (a % 2 ==0)
       printf("NO IS EVEN.");
    else printf("NO IS ODD.");
    return 0;
}
    
