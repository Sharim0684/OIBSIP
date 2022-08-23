/* Write a function in C to read n number of values in an array and display it in reverse
order. */

#include <stdio.h>
int num(int a[],int n)
{

    printf("Enter a number ");
    scanf("%d", &n);
    printf("input %d numbers in the array ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    return n;
}
int main()
{
    int i,  a[1000];
    int n = num(a,n);
    printf("the value store in array is \n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nthe store array in reverse order is \n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");
}