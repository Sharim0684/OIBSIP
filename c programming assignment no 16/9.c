// Write a program in C to accept a matrix and determine whether it is a sparse matrix.


#include<stdio.h>
int main()
{
    int a[10][10];
    int n,r,c;
    int count=0;
    int i,j;
    printf("input the number of rows in matrix ");
    scanf("%d",&r);
    printf("inpur numbers of column in matrix ");
    scanf("%d",&c);
    printf("Enter a number ");
    for (int  i = 0; i < r; i++)
    {
        for (int j = 0; j < c ; j++)
        {
           scanf("%d",&a[i][j]);
           if (a[i][j]==0)
           
           {
            count++;
           
           }
           
        }
    }
    
        if (count>=((r*c)/2))
        {
            printf("it is a sparse matrix ");
        }
        else
        
            printf("it is not a sparse matrix.");
    return 0;
}