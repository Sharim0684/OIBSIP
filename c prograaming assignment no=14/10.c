/* Write a program in C to copy the elements of one array into another array.Take array
values from the user */

#include<stdio.h>
int main()
{
    int a[5],b[5];
    
    printf("Enter 5 number ");
    for (int i = 0; i <=4; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <=4; i++)
    {
        b[i]=a[i];
    }
    printf("the element in first array is %d \n");
    for (int i = 0; i <=4; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\ncopy of an element is %d \n");
    for (int i = 0; i <=4; i++)
    {
        printf("%d  ",b[i]);
    }
    return  0;
}