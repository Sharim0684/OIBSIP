// /* Write a function to calculate LCM of two numbers. (TSRS) */

#include<stdio.h>
int SI(int i,int n1,int n2)
{
    int lcm,hcf;   
    for ( i = 1; i <=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0 )
        hcf=i;

    }
    lcm=(n1*n2)/hcf;
    printf("the lcm of %d and %d is %d ",n1,n2,lcm);
    return n1,n2,lcm;
}
int  main()
{
    int n1,n2,i;
    printf("Enter two number ");
    scanf("%d%d",&n1,&n2);
    SI(i,n1,n2);
}