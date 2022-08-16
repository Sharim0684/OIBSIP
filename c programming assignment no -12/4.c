/* Write a recursive function to print first N odd natural numbers in reverse order */

#include<stdio.h>
int odd(int);
int main()
{
    int n;
     printf("Enter a number: ");
     scanf("%d",&n);
     printf("%d reverse numbers are ",n);
     odd(n);
}
int odd(int a)
{
    if (a>=1)
    {
        printf("%d ",2*a-1);
        odd(a-1);
    }
    
}