/* Write a recursive function to print squares of first N natural numbers */

#include<stdio.h> 
int square(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("first %d natural number square are ",n);
    square(n);

    
}
int square(int a)
{
    if (a>=1)
    {
        square(a-1);
        printf("%d ",a*a);
    }
}   