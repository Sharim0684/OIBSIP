/* Write a recursive function to print first N natural numbers in reverse order */

#include <stdio.h>
void print(int n);
int main()
{
    print(10);
}

void print(int n)
{
    if (n >= 1)
    {

        printf("%d ", n);
        print(n - 1);
    }
}