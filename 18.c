/*Write a program which takes the month number as an input and display number of 
days in that month*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a month number");
    scanf("%d",&a);
    if (a==1 || a==3 || a==5 || a==7 || a==9 || a==11)
    {
        printf("31 days");
    }
    else if(a==4 || a==6 || a==8 || a==10 || a==12)
    {
        printf("30 days");
    }
    else if(a==2)
    {
        printf("28/29 days");
    }
     else 
     {
        printf("invalid number ");
     }
     return 0;
}