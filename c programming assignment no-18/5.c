// Write a function to transform a string into lowercase

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    printf(" Enter the string: ");
    scanf(" %s", &str);
    lower(str);
    printf(" \n Upper Case to Lower case string is: %s", str);
    return 0;
}
int lower(char str[10])
{
    int i;
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    }
}