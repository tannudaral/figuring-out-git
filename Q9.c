// Question 9 (a) WAP to print ASCII values of all digits along with digits (0-9) using goto statement.
#include <stdio.h> 
int main()
{   
   int count; 
	 count= '0';
	 start:
	 printf("ASCII value of %c = %d \n",count,count);
	 count++;
	 if(count <= '9')
		 goto start;
	 return 0;
} 

// Question 9 (b) WAP to print table of a given number using goto statement.
#include <stdio.h> 
int main()
{
   int num,i=1; 
   printf("Enter the number whose table you want to print: ");   
   scanf("%d", &num);  
   table:   
   printf("%d x %d = %d\n",num,i,num*i);  
   i++;  
   if(i<=10)  
   goto table;    
   return 0;
}
	
