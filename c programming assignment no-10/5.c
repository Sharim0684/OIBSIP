/* Write a function to print first N odd natural numbers. (TSRN) */

#include<stdio.h>
int number(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    number(n);

}
int number (int s)
{
   for (int i = 1; i <=s; i++)
   {
    // if (i%2!=0)
    // {
    //     printf("%d ",i);
    // }
    
     printf("%d ",2*i-1);
   }
   
}