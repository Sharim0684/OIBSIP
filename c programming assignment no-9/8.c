/* Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.
*/

#include<stdio.h>
int main()
{
    int choice,n,i;
    while(1)
    {
    printf("\nselect 1. Enter positive number:");
    printf("\nselect 2. Enter negative number:");
    printf("enter your choice ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1 :
    printf("enter a positive number");
    scanf("%d",&n);
     i=n*-1;
    printf("the negative number is %d : ",i);
    break;
    case 2 : 
    printf("Enter a negative number:");
    scanf("%d",&n);
    i=n*-1;
    printf("the positive number is %d : ",i);
    break;
    default:
    printf("thanks");
    }
    }
    return 0;
}