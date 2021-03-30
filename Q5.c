// Question 5 (a)	WAP to swap two numbers using third variable.
#include <stdio.h>
int main()
{
    int n1, n2, temp;
    printf("076 Tannu Daral\n");
    printf("Enter the numbers which are to be swapped:\nn1= ");
    scanf("%d", &n1);
    printf("n2= ");
    scanf("%d", &n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("After swapping:\n");
    printf("n1 = %d\n", n1);
    printf("n2 = %d", n2);
    return 0;
}

// Question 5 (b)	WAP to swap two numbers without using third variable.
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("076 Tannu Daral\n");
    printf("Enter the numbers which are to be swapped:\nn1= ");
    scanf("%d", &n1);
    printf("n2= ");
    scanf("%d", &n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("After swapping:\n");
    printf("n1 = %d\n", n1);
    printf("n2 = %d", n2); 
    return 0;
}
  
