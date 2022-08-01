/* Program to Convert even number into its upper nearest odd number
Switch Statement */

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a even number ");
    scanf("%d",&n);
    switch (n%2==0)
    {
    case 1:
     i=n+1;
     printf("odd number is %d:",i);
     break;
     default:
     printf("thanks");
    }
}