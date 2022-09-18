//  Write a function to reverse a string.

#include<stdio.h>
#include<string.h>
int main()
{
    reverse();
    return 0;
}
void reverse()
{
    int len,i,n;
    char str[10];
    printf("Enter a string ");
    scanf("%s",&str);
    len = strlen(str);
    printf("reverse string is ");
    for (int i = len-1;i>=0; i--)
    {
       printf("%c",str[i]);
    }
}