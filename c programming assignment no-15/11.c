#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter a number ");
    scanf("%d",&a);
    for (int i = a+1; i <=100; i++)
    {
        c=0;
        for (int j=2; j <i; j++)
        {
            if (i%j==0)
            {
               c=1;
               break;
            }
             
        }
        if (c==0)
             {
               printf(" next prime number is:%d",i);
               break;
             }
             
    }
    
}