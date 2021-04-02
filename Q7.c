// Question 7 (a)	WAP to calculate sum and average of n numbers.
#include<stdio.h>  
int main()   
{
    int n, i, sum=0, arr[n];  
    float avg;
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
    for(i=0; i<n; i++)
    sum+=arr[i];
    printf("Sum = %d\n", sum);
    avg=(float)sum/n;
    printf("Average = %f", avg);
    return 0;
}

// Question 7 (b) WAP to calculate sum of digits of a number.   
#include<stdio.h>  
int main()   
{
    int n,sum=0,m;    
    printf("Enter a number:");    
    scanf("%d",&n);    
    while(n>0)    
    {    
       sum=sum+n%10;    
       n=n/10;    
    }    
    printf("Sum is=%d",sum);    
    return 0;  
} 

//Question 7 (c) WAP to count number of zeros in a number.
#include<stdio.h>  
int main()   
{ 
   int number, count;
   count=0;
   printf("Enter the number: ");
   scanf("%d", &number);
   while(number!=0)
   {
      if(number%10 ==0) 
         count++;
        number=number/10; 
      
   }
   printf("No of zeroes = %d", count);
   return 0;
}  

