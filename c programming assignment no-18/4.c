// Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>

int upper(char str[10])
{
    for (int i = 0; str[i]!=0; i++)
    {
       if (str[i]>='a' && str[i]<='z')
       {
          str[i]=str[i]-32;
       }
       
    }
    printf("uppercase is %s ",str); 
 }
int main()
{
    char str[10];
    printf("Enter a string ");
     gets(str);
     upper(str);
    return 0;
}
