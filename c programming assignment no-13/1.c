/* Write a recursive function to calculate sum of first N natural numbers */

#include<stdio.h>
int addnumber(int);
int main()
{
    int n,x;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("sum is  = %d ",addnumber(n));
    return 0;
}
int addnumber(int i)
{
    if (i!=0)
    
        return i + addnumber(i-1);
        else 
        return i;
         
    
}