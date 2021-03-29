// Question 1 (a) 
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
// Question 1 (b) 
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
// Question 1 (c)
#include <stdio.h>
int main()
{
    
