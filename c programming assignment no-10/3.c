/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS) */

#include <stdio.h>
int SI(int);
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("return 1 ");
    }
    else
    {
        printf("return 0 ");
    }

    return 0;
}
int SI(int b)
{
    return b;
}