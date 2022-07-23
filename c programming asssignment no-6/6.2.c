/* Write a program to calculate sum of first N even natural numbers */

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", 2 * i);
        sum = sum + 2 * i;
    }

    printf("sum is %d ", sum);
    return 0;
}