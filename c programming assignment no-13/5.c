/* Write a recursive function to calculate factorial of a given number */

#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
   // fact = fact + num;
   printf("factorial is %d = %d ",n,sum(n));
   return 0;

}
int sum(int n)
{
    if (n>=1)
    return n*sum(n-1);
    return 1;
    
}