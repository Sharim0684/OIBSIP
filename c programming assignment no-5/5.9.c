/* Write a program to print cubes of the first N natural numbers */

#include <stdio.h>
int main()
{
    int i = 1, n;
    printf("Enter a number ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i * i * i);
        i++;
    } while (i <= n);
    return 0;
}