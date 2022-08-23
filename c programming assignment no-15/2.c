/* Write a function to find the smallest number from the given array of any size. (TSRS) */

#include<stdio.h>
int small(int [],int );
int main()
{
    int a[]={3,5,67,7,8};
    int s=5,n;
    s=small(a,n);
    printf("smallest number is %d ",s);
    return 0;
}

int small(int a[],int n)
{
    for (int  i = 0; i <=4; i++)
    {
        if(a[i]<n)
        n= a[i];
    }
    return n;
}