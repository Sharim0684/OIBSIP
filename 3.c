//Write a program to check whether a given number is an even number or an odd 
//gcc 14.number

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("number is even ");

    }
    else
    {
        printf("number is odd ");

    }
    return 0;
}