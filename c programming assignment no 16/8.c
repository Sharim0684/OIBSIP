//Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>
int main()
{
    int i,j;
    int a[10][10];
    printf("Enter a number ");
    for (int  i = 1; i < 3  ; i++)
    {
       for (int j = 1; j <3 ; j++)
       {
         scanf("%d ",&a[i][j]);

       }
       
    }
    printf("the matrix is \n");
    for (int  i = 1; i < 3  ; i++)
    {
       for (int j = 1; j < 3 ; j++)
       {
         printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    printf("the upper triangular matrix is \n");
    for (int  i = 1; i < 3  ; i++)
    {
       for (int j = 1; j < 3 ; j++)
       {
        if (i>=j)
        {
            printf("%d ",a[i][j]);
        }
        else
        {
            printf("%d ",0);
        }
               
       }
       printf("\n");  
    }
    return 0;
}