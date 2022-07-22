//Write a program to find the greatest among three given numbers. Print number once 
//if the greatest number appears two or three times

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a three number:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && a>=c)
    {
        printf("%d is a greatest number ",a);

    }
     if (b>=a && b>=c)
    {
        printf("%d is greater number ",b);
    }
     if(c>=a && c>=b)
     {
        printf("%d is greater number ",c);
     }
    return 0;

}