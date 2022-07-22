/* Write a program to check whether a given number is divisible by 7 or divisible by 3 */

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if (a%7==0)
    {
        printf("divisible by 7 ");

    }
    if(a%3==0)
    {
        printf("divisible by 3 ");
    }
    return 0;
}