/*  Write a program to find the second smallest number in an array.Take array values
from the user. */

#include <stdio.h>
#include <limits.h>
int main()
{
    int a[5];
    int smallest, secondsmallest;
    printf("Enter 5 number ");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = a[i];
        }
    }
    printf("second smallest number is %d ",secondsmallest);
    return 0;
}