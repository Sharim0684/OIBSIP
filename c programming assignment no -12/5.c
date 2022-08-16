/* Write a recursive function to print first N even natural numbers */

#include<stdio.h>
int even(int );
int main()
{
    int s;
    printf("enter a number ");
    scanf("%d",&s);
    printf("first %d even natural number arer ",s);
    even(s);

}
int even(int i)
{
    if (i>=1)
    {
       even(i-1);
       printf("%d ",2*i);
    }
    
}