// Write a C program to sort a string array in ascending order

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],ch;
    int i,j,l;
    int temp=0;
    printf("Enter a string ");
    fgets(str,sizeof str , stdin);
     l=strlen(str);
     for (int  i = 0; i < l; i++)
     for (int j = 0;j <l-1; j++)
     if(str[j]>str[j+1])
     {
        temp=str[j];
        str[j]=str[j+1];
        str[j+1]=temp;
     }
     printf("assending order is ");
     printf("%s",str);
}