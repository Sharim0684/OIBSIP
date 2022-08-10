/* Write a function to calculate simple interest. (TSRS) */

#include<stdio.h>
int main()
{
    int principal,time,rate,ptr;
    printf("Enter a principal:");
    scanf("%d",&principal);
    printf("Enter a time ");
    scanf("%d",&time);
    printf("Enter a rate ");
    scanf("%d",&rate);
    ptr= (principal*time*rate)/100;
    printf("simple interest is %d ",ptr);
    return 0;
    
}
int SI(int p,int t,int r)
{
    int si=(p*r*t)/100;
    return si;
}