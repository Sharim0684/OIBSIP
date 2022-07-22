/*Write a program to print cubes of the first 10 natural numbers*/
#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i * i * i);
        i++;
    } while (i <= 10);
}