/* Write a program to check whether a given number is a Prime number or not */

#include<stdio.h>
int main()
{
    int i,n,c=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            c++;
        }
        
    }
    if (c==2)
    {
       printf("prime number ");

    }
    else
    {
        printf(" not a prime nnumber ");
    }
    return 0;
}