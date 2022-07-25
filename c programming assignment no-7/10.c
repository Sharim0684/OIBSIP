// write a program to print all Armstrong numbers under 1000
#include<stdio.h>   
int main()  
{  
    int num, count = 1, rem, sum=0;  
  
    while(count <= 1000)  
    {  
        num = count;  
        while(num)  
        {  
            rem = num % 10;  
            sum = sum + (rem * rem * rem);  
            num = num / 10;  
        }  
  
        if(count == sum)  
        {  
            printf("%d is a Armstrong number\n", count);  
        }  
  
        count++;  
    }  
  
     return 0;  
}  