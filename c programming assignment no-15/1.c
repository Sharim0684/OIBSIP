/* Write a function to find the greatest number from the given array of any size. (TSRS) */

#include<stdio.h>
 greatest(int [],int);
int main()
{
    int n;
    int a[] = { 7,8,9,4,5};
    int s=5;
    n=greatest(a,s);
    printf("Greatest number is %d ",n);

}
int greatest(int a[],int n)
{
    n=a[0];
    for (int  i = 0; i <=4 ; i++)
    {
        if (a[i]>n)
        
            n=a[i];
        
        
    }
return (n);
}
