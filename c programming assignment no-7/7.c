/* Write a program to print all Prime numbers between two given numbers */
#include <stdio.h>
int main()
{
    int num1, num2, i, j, c;
    printf("enter the two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("prime no present in between %d and %d:", num1, num2);
    for (i = num1 + 1; i < num2; i++)
    {
        c = 0;
        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 0)
            printf("%d\n", i);
    }
    return 0;
}