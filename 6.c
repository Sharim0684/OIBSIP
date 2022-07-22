//Write a program to print greater between two numbers. Print one number of both are 
//the same.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a two number: ");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("both number are same");
    }
    else if(a>b)
    {
        printf("%d is a greater",a,b);

    }
    else
    {
        printf("%d is smallest number",a);
    }
    return 0;
}