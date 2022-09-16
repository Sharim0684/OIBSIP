  //Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>
#include<string.h>
//char * gets (char *);
int main()
{
    char str[10],n,count=0,c;
    printf("Enter char in the string ");
    gets(str);
     printf("Enter a string in the array is ");
    c=getchar();
    for (int  i = 0;str[i]; i++)
    {
        if (str[i]==c)
        {
          count++;
        }
        
    }
    printf("character %c ocoures in %d times",c,count);
     return  0;
}