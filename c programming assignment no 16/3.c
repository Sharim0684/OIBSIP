//  Write a program in C to find the transpose of a given matrix

#include<stdio.h>
int main()
{
    int c[10][10];
    printf("Enter a number ");
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3 ; j++)
        {
            scanf("%d",&c[i][j]);
        }
        
    }
    printf("the element in the matric are ");
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3 ; j++)
        {
            printf("%d ",c[i][j]);
        }
        
    }
    int r[10][10];
    printf("after transpose the element are \n");
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3 ; j++)
        {
            r[j][i]=c[i][j];
            printf("%d ",r[j][i]);
        }
        printf("\n");
    }
    return 0;
}