/*  Write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN */
#include<stdio.h>  
  
void primefactors(int n)  
{  
    int i;  
  
    printf("\nPrime Factors of %d are ..\n", n);  
    for(i = 2; n > 1; i++)  
    {  
        while(n % i == 0)  
        {  
            printf("%d ", i);  
            n = n / i;  
        }  
    }  
    printf("\n");  
}  
  
int main()  
{  
    int n;  
  
    printf("Enter a positive integer\n");  
    scanf("%d", &n);  
  
    primefactors(n);  
  
    return 0;  
}  