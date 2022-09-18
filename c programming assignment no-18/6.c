// Write a function to check whether a given string is an alphanumeric string or not.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("Enter a number");
    gets(str);
    num(str);
}
int num(char str[10])
{
    int A = 0, B = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i]>= 'a' && str[i]<= 'z' || str[i]>= 'A' && str[i]<= 'Z');
         A=1;
        if (str[i] >= '1' && str[i] <= '9'); 
        B=1;
       
    }
     if (A==1 && B==1)
        printf("%s string is alphanumeric ", str);
    else
        printf("%s string is not alphanumeric ", str);
}
