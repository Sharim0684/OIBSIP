/* Write a recursive function to print first N odd natural numbers */

#include <stdio.h>
int SI(int );
int main()
{
    int n;
   printf("Enter any  number ");
   scanf("%d",&n);
   printf("first %d odd number are ",n);
   SI(n);
}
int SI(int a)
{
    if (a>= 1)
    {
        SI(a-1);
        printf("%d ", 2*a-1);
    }
}