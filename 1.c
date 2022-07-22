/* Write a program to check whether a given number is positive or non-positive */

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0)
    {
        printf("number is positive");
    }
    if (a<=0)
    {
        printf("number is non positive");

    }
    return 0;
}