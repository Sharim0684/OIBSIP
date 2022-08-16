/* Write a recursive function to calculate sum of first N odd natural numbers */

#include<stdio.h>
int addnumber(int ,int);
int main()
{
    int num1=1,num2;
    printf("Enter a number ");
    scanf("%d",&num2);
    printf("sum is = %d ",addnumber(num1,num2));
}
int addnumber(int num1,int num2)
{
    if (num1>num2)
        return 0;
        else 
        return num1 + addnumber(num1+2,num2);
}