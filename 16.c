/*Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

#include <stdio.h>
int main()
{
    char ch;
    int a;
    printf("Enter a digit or alphabet ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("uppercase");
    }
    else if (ch >= 'a' && ch <= 'z')
        
    {
        printf("lowercase");
    }
    else
    {
        printf("digit");
    }
    return 0;
}