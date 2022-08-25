// Write a program in C to print or display the lower triangular of a given matrix.

#include<stdio.h>
int main()
{
    int i,j;
    int a[10][10];
    printf("Enter a number ");
    for (int  i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3 ; j++)
       {
        scanf("%d",&a[i][j]);

       }
    }
    printf(" the matrix is\n");
    for (int  i = 0; i < 3 ; i++)
    {
     for (int  j= 0; j < 3 ; j++)
     {
       printf(" %d ",a[i][j]);
     }
       printf("\n") ;
    }
    printf("the lower triangular of a given matrix is \n");
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            if(i<=j)
            {
                printf("%d ",a[i][j]);
            }
            else 
            {
                printf("%d ",0);
            }
        }
       printf("\n") ;
    }
    return 0;
}