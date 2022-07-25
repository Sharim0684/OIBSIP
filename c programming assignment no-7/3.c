/* Write a program to check whether a given number is there in the Fibonacci series or not */

#include <stdio.h>
int main()
{
    int i, n, prev = 0, cur = 1, next = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    for (i = 0; 1; i++)
    {
        next = prev + cur;
        // printf("%d\n",next);
        prev = cur;
        cur = next;
        if (next == n)
        {
            printf("number found ");
            break;
        }
        if (next > n)
        {
            printf("number not found");
            break;
        }
    }
    return 0;
}