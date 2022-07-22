/* Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed */
#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    printf("Enter a mark of 5 subject: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a,b,c,d,e;
    if (sum>=33)
    {
        printf(" candidate pass the examination ");

    }
    else
    {
        printf("candidate failed the examination ");

    }
    return 0;
}