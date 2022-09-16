// Write a program to convert a given string into uppercase

#include<stdio.h>
#include<string.h>
int main()
{
    char str[10]={"sharim"};
    for (int i = 0;str[i]; i++)
    {
       if (str[i]>='a' && str[i]<='z' )
       {
          str[i]=str[i]-32;

       }
       
    }
    printf("uppercase string is %s ",str);
    return 0;
    
}