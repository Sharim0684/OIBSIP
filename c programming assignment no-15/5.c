/* Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element */

#include <stdio.h>

int main()
{
     int a[5];
    //int a,n;
     int i;
    // printf("Enter an array size ");
    // scanf("%d",&n);
   printf("Enter an number ");
   // printf("Input %d array number ",n);
    for (int i = 0; i <=4; i++)
    {
      scanf("%d",&a[i]);
    }
    
    for (int  i = 0; i <=4; i++)
    {
        if (a[i]==a[i+1])
         return a[i];
        
      printf("adjacent duplicate values are %d ",a[i]); 
    } 
   // return 0;
    
}