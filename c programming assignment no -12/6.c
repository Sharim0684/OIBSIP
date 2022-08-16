/* Write a recursive function to print first N even natural numbers in reverse order */

#include<stdio.h>
int even (int );
int main()
{
    int i;
    printf("Enter a number ");
    scanf("%d",&i);
    printf("first %d even reverse numbers are ",i);
    even(i);

}
int even(int s)
{
    if (s>=1)
    {
        printf("%d ",2*s);
        even(s-1);
    }
    
}