#include <stdio.h>
int main()
{   
    int i, n, count=0;
    printf("076 Tannu Daral\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        count+=1;
    }
    if(count==2) 
    printf("The number is prime.");
    else
    printf("The number is composite.");
    return 0;
}
