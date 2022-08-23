// /* Write a function to rotate an array by n position in d direction. The d is an indicative 
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
// *


 #include <stdio.h>
#include <conio.h>
 
int rightrotate(int *a,int n,int k)
{ 
    int i,j,temp;
    for(i=0; i<k; i++)
    {
        temp=a[n-1];
        for(j=n-1; j>0; j--)
        {
           a[j]=a[j-1];
		}

         a[j]=temp;
    }
    
       
 }
 print(int *a,int n)
{ 
   
    int i;
    for(i=0; i<n; i++)
    {
       printf("%d ",a[i]);
    }
    
       
 }

  
int main()
{
    int a[10000],i,n,j,k,temp;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("how many times right rotate : ");
    
	scanf("%d", &k);
     
    rightrotate(a,n,k);
   
    printf("\narray elements after right rotate  : ");

    print(a,n);

     
    
}

// #include<stdio.h>
// int main()
// {
//     int d,i;
//     int a[5]={1,2,3,4,5};
//     int d-2;
//     while (d!=0)
//     {
//        int temp = a[4];
//        for (int i = 4; i>0; i--)
//        {
//        a[i]=a[i-1];
//        }
//        a[i]-temp;
//        d--;
//     }
//     for (int  i = 0; i <5; i++)
//    printf("%d",a[i]);

// return 0;
    
// }