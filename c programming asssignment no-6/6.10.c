/* Write a program to reverse a given numbe */

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for ( i = n; i>=1 ; i--)
    {
        printf("%d\n",i);

    }
    return 0;
}