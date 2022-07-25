/* Write a program to check whether two given numbers are co-prime
numbers or not
*/
#include <stdio.h>
int main()
{
    int i, a, b, hcf = 1;
    printf("Enter a number ");
    scanf("%d%d", &a, &b);
    int min = a < b ? a : b;
    for (i = 1; i <= min; i++)
    {
        if (hcf == 1)
            hcf = i;
    }
    if (hcf == 1)
    {
        printf("the number is co-prime");
    }
    else
    {
        printf("number is not prime ");
    }
    return 0;
}