//Write a program to print all Prime numbers under 100

#include<stdio.h>
int main()

{
    //int i,n;
    int i,j,n;  
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);
    printf("Prime numbers are:-\n");    
    for(i=1;i<=100;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }    
       if(c==2)
        {
            printf("%d ",i);
        }
    }
}
