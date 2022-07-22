/* Write a program to check whether a given number is positive, negative or zero */

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a  number ");
    scanf("%d",&a);
    if (a>=0)
    {
        printf("positive");
    }
     if (a<0)
    {
       printf("negative");
    }
    if(a==0) 
    {
        printf("zero");
    }
    
    return 0;
}