/* Write a program to find second largest in an array.Take array values from the user */

#include <stdio.h>
#include<limits.h>
int main()
{
    int a[5];
    int max,secondmax;
    printf("Enter 5 numbers ");
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    max = secondmax = INT_MIN;
    for (int i = 0; i <= 4; i++)
    {
        if (a[i] > max)
        {
            secondmax = max;
            max = a[i];
        }
    }
    printf("second largest element is %d ", secondmax);
}