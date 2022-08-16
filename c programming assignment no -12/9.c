/*  Write a recursive function to print octal of a given decimal number */
#include<stdio.h>
int decimal_octal(int n)
{
    if(n==0)
    return n;
    else  
    return (n%8)+10* decimal_octal(n/8);
}
int main()
{
    int no;
    printf("Enter a number ");
    scanf("%d",&no);
    printf("decimal(%d) = octal(%d) ",no,decimal_octal(no));
}