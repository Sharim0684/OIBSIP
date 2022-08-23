/* Write a program to find the smallest number stored in an array of size 10. Take array
values from the user */

#include<stdio.h>
int main()
{
    int a[10];
    int smallest;
    printf("Enter a number ");
    for (int i = 0; i <=9 ; i++)
    {
       scanf("%d",&a[i]);
    }
    smallest = a[0];
    for (int  i = 0; i <=9 ; i++)
    {
       if (a[i]<smallest)
       {
         smallest = a[i];
       }
       
    }
    printf("smallest number is %d ",smallest);
    return 0;
}