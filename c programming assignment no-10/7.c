/* . Write a function to calculate the number of arrangements one can make from n items 
and r selected at a time. (TSRS) */
#include<stdio.h>
int fact(int n)
{
    int fact=1;
    for (int  i = 1; i<=n; i++)
    fact = fact * i;
    return fact;
    
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)* fact(n-r));

}
int main()
{
    printf("%d",comb(5,2));
    return 0;
}