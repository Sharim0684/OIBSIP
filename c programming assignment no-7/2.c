/* Write a program to print first N terms of Fibonacci series */
#include <stdio.h>
int main()
{
    int i, n, prev = 0, cur = 1, next = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("1");
    for (i = 0; i <= n - 1; i++)
    {
        next = prev + cur;
        printf("%d\n", next);
        prev = cur;
        cur = next;
    }

    return 0;
}