/* Write a program to find the greatest number stored in an array of size 10. Take array
values from the user. */

#include <stdio.h>
int main()
{
    int a[10], i;
    int greatest;
    printf("Enter 10 number ");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);

    }
    greatest=a[0];
    for (int i = 0; i <=9; i++)
    {
        if (a[i]>greatest)
        {
           greatest = a[i];
        }
        
    }
     printf("greatest number is %d ",greatest);
}