/* write a program to find the Nth term of the Fibonnaci series */

#include <stdio.h>
int main()
{
    int i, n, prev = 0, cur = 1, next = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    // printf("1");
    for (i = 0; i <= n - 1; i++)
    {
        next = prev + cur;

        prev = cur;
        cur = next;
    }
    printf("%d\n", next);
    return 0;
}
