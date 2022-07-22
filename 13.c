/*Write a program to check whether a given number is divisible by 3 and divisible by 2.*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    if (a%3==0 && a%2==0)
    {
        printf("divisible by 3 ");
    }
    else 
    {
        printf("divisible by 2 ");
    }
    return 0;  
}