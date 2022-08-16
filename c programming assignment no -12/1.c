/* Write a recursive function to print first N natural numbers */

#include<stdio.h>
void printN(int);
int main()
{
   printN(10);
    return 0;

}
void printN(int n)
{
    if (n>0)
    {
        printN(n-1);
        printf("%d ",n);
    }
    
}