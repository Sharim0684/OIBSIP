// Write a program to count vowels in a given string

#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int len;
    char vowels=0;
    printf(" Enter char in the sting ");
    gets(s);
    len=strlen(s);
    for (int  i = 0;i<len; i++)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        vowels = vowels + 1;
        
    }
    printf("the count of given vowels is %d ",vowels);
    return 0;
     
}