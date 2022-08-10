/* Write a function to calculate the factorial of a number. (TSRS) */

#include<stdio.h>
int factorial(int);
int main()
{
    int x,n;
    long long fact=1;
    printf("Enter a number ");
    scanf("%d",&n);
   if (n<0)
   {
    printf("Error!,negative number does not have factorial");
   }
   else
   {
    for (int i = 1; i <=n; ++i)
    {
      fact = fact * i;
    }
    printf("factorial is %d = %d ",n,fact);
   }
   
    return 0;
}
int factorial(int y)
{
    return y;
}