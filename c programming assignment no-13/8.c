// Write a program in C to count the digits of a given number using recursion

#include<stdio.h>
int digit(int);
int main()
{
    int n,i;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("count of the given number is %d ",digit(n));
}
int digit(int num)
{
   static int count=0;
    if (num!=0)
    {
        count++;
        digit(num/10);
    }
    return count;
    
}