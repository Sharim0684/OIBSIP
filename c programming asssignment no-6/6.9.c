/* Write a program to calculate LCM of two numbers */

#include<stdio.h>
int main()
{
    int i,n1,n2,lcm,hcf;
    printf("Enter a two positive integers ");
    scanf("%d%d ",&n1,&n2);
    for ( i = 1 ; i <=n1 && i<=n2 ; i++)
    {
       if (n1%i==0 && n2%i==0)
          hcf=i;
    }
       
       
            lcm=(n1*n2)/hcf;
       
       printf("the lcm of %d and %d is %d ",n1,n2,lcm);
       return 0;
    }
    