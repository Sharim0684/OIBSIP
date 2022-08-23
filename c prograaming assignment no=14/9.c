/* Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user. */

#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter 5 numbers ");
    for (int i = 0; i <=4; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("value stored in array are \n ");
    for (int i = 0; i <=4; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\nreverse order of an array are \n");
    for (int i = 5-1 ; i>=0; i--)
    {
        printf("%d   ",a[i]);
    }
    return 0;
}
    