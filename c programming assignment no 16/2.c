// Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], product[3][3];
    printf("Enter first 3x3 matrics");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrics ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\n product of this matrics are: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product[i][j] = a[i][j] * b[i][j];
            printf("%d", product[i][j]);
        }
       printf("\n");
    }
     return 0;
}