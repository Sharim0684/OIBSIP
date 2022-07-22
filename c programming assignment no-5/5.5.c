/* Write a program to print the first N odd natural numbers in reverse order. */

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number ");
    scanf("%d\n", &n);
    for (i = n; i >= 1; i--)
    {
        printf("%d\n", 2 * i - 1);
    }
    return 0;
}