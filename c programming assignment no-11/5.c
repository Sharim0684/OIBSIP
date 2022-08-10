/*  Write a function to print first N prime numbers (TSRN) */

#include <stdio.h>
int num(int n)
    {
        int i,j;
        for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

int main()
{
    int n,i,j;
    printf("Enter a number ");
    scanf("%d", &n);
    num(n);
}