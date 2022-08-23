/* Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user */

#include<stdio.h>
int main()
{
   int a[10],se=0,sd=0;
   printf("Enter 10 number ");
   for (int i = 0; i <=9 ; i++)
   {
     scanf("%d",&a[i]);
     if (a[i]%2==0)
     {
        se = se + a[i];
     }
     else
     {
        sd = sd + a[i];
     }
     
   }
   printf("sum of even number is %d\n",se);
   printf("sum of odd number is %d ",sd);
   return 0;
}