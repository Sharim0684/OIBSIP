/* Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS) */

#include<stdio.h>
int fact(int n)
{
    int i;
    int fact=1;
    for (int i = 1; i <=n; i++)
    fact = fact * i;
    return fact;
    
}
int permu(int n , int r)
{
    return  fact (n) / (fact (n-r));
}
int main()
{
    printf("%d",permu(5,2));
    return 0;
}