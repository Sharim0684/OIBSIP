// Write a program in C to find the sum of left diagonals of a matrix

#include<stdio.h>
int main()
{
    int i,j;
    int sum=0;
    int a[10][10];
    printf("Enter a number ");
    for (int i = 0; i <2; i++)
    {
       for (int j =0 ;j<2;j++)
       {
        scanf("%d",&a[i][j]);if(i==j)sum=sum+a[i][j];
       }
       
    }
    printf("the matrix is \n");
    for (int i = 0; i <2; i++)
    {
        for (int j = 1; j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("the sum of left diagonals of a matrix %d ",sum);
    return 0;
}