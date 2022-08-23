// Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>

int dup(int a[], int n)
{
    int count=0;
    for (int i = 0; i <n; i++)
    {
      scanf("%d",&a[i]);
    }
    for (int i = 0; i <n ; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (a[i]==a[j])
            {
                count++;
                break;
            }
            
        }
        
    }
  return count;

}



int main()
{
    int n,i,j,a[1000];
    
    printf("Enter an array size ");
    scanf("%d",&n);
    printf("Input %d size of an array ",n);
    int count= dup(a,n);
    printf("total number of duplicate element in the array is %d ",count);
    return 0;
    
}
