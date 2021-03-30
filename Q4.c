// Question 4 (a)	WAP to find greatest of three numbers.
#include <stdio.h>
int main()
{  
    int n1, n2, n3;
    printf("Enter three numbers:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if(n1>n2 && n1>n3) 
        printf("%d is greater\n", n1);
    else if (n2>n3) 
        printf("%d is greater\n", n2);
    else 
        printf("%d is greater\n", n3); 
       return 0;
}
// Question 4 (b)	WAP to that takes n numbers from user and print them in decreasing order. 
#include <stdio.h>
int main()
{ 
    int arr[100], n, i, j, temp;
    printf("Enter the no of inputs: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {  
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
       for(j=i+1; j<n; j++)
       {
           if(arr[i]<arr[j]) 
             {
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
       }
    printf("Numbers in descending order:\n");
    for(i=0; i<n; i++)
    printf("%d\n", arr[i]);
return 0;
}
