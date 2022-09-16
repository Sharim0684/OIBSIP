// Write a program to convert a given string into lowercase

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = {"SHARIM_SHAIKH"};
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    printf("lowercase letter are %s ", str);
    return 0;
}