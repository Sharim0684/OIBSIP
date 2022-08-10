/* Write a function to print first N natural numbers (TSRN) */
#include <stdio.h>
 void number(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    number(n);
}
void number(int c)
{
    for (int i = 1; i <= c; i++)
    {
        printf("%d ", i);
    }
}