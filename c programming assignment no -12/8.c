/* Write a recursive function to print binary of a given decimal number */

#include<stdio.h>
int decimal_binary(int n)
{
    if(n==0)
    return 0;
    else
    return ((n%2)+10* decimal_binary(n/2));
}
int main()
{
    int no;
    printf("Enter a decimal number ");
    scanf("%d",&no);
    printf("decimal(%d) = binary(%d) \n",no,decimal_binary(no));
}