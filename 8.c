//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a year: ");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("it's a leap year ");

    }
    else 
    {
    printf("it's not a leap year ");
    }
    return 0;
    
}