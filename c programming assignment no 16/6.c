//  Write a program in C to find the sum of rows and columns of a Matrix
#include <stdio.h>
int main()
{
   int i, j;
   int a[10][10];
   int sum = 0;
   int rsum[10];
   int csum[10];
   printf("Enter a number ");
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         scanf("%d", &a[i][j]);
         if (i == j)
            sum = sum + a[i][j];
      }
   }
   printf("the matrix are \n");
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         printf("%d ", a[i][j]);
      }
   }
   for (int i = 0; i < 2; i++)
   {
      rsum[i] = 0;
      for (int j = 0; j < 2; j++)
      {
         rsum[i] = rsum[i] + a[i][j];
      }
   }
   for (int i = 0; i < 2; i++)
   {
      csum[i] = 0;
      for (int j = 0; j < 2; j++)
      {
         csum[i] = csum[i] + a[j][i];
      }
   }
   printf("\nThe sum or rows and columns of the matrix is :\n");
   for (i = 0; i < 2; i++)
   {
      for (j = 0; j < 2; j++)
         printf(" %d ", a[i][j]);
      printf(" %d ", rsum[i]);
      printf("\n");
   }
   for (j = 0; j < 2; j++)
   {
      printf(" %d ", csum[j]);
   }
   printf("\n");
   return 0;
}
