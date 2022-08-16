/* Write a recursive function to calculate sum of squares of first n natural numbers */

#include<stdio.h>
int square(int);
int main()
{
    int x,n;
    printf("Enter a number ");
    scanf("%d",&x);
    printf("sum of square is  = %d ",square(x));
    return 0;

}
int square(int n)
{
    if(n==1)
    return (1);
    return (n*n+square(n-1));
   
}
