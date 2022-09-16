// Write a program to calculate the length of the string. (without using built-in method)



#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char str[20]={"sharim"};
    l=strlen(str);
    printf("the length is %s ",l);
}

// #include<stdio.h>
// int main()
// {
//     char str[10]={"sharim"};
//     int i;
//     for(i=0;str[i];i++);
//     printf("length of your name is %s ",i);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int l;
//     char str[20];
//     l=strlen("sharim");
//     printf("length of string  is %s ",l);
//     return 0;
// }