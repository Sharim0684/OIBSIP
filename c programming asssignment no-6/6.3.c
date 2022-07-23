/* Write a program to calculate sum of first N odd natural numbers */
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", 2 * i - 1);
        sum = sum + 2 * i - 1;
    }
    printf("sum is %d ", sum);
    return 0;
}