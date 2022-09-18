// Write a function to compare two strings

#include<stdio.h>
#include<string.h>
int cmp(char str[10],char str1[20])
{
    if(strcmp(str,str1)==0){
         printf("two string is same");
    } 
    else{
        printf("two stirng are different");
    }    
}
int main()
{
    char str[10],str1[20];
    printf("Enter a first string");
    scanf("%s",&str);
    printf("Enter a second string");
    scanf("%s",&str1);
    cmp(str,str1);
}