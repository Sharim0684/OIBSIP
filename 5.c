//Write a program to check whether a given number is a three-digit number or not
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if (a>100 & a<999)
    {
        printf("number is 3-digit");
    }
    else
    {
        printf("number is not 3-digit");
    }
    return 0;

}