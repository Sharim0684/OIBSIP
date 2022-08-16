/* Write a recursive function to print reverse of a given numbe */

#include<stdio.h>
//int reverse(int,int);
int main()
{
    int n;
    int ans=0;
    printf("Enter a number");
    scanf("%d",&n);
    
while(n>0)
// }
// int reverse(int no,int n)
 {
    
    int rem=n%10;   //234
    ans=ans*10+rem;
    n=n/10;
   
}
printf("reverse number is ",ans);
return 0;
}