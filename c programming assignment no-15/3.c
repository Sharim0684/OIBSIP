// Write a function to sort an array of any size. (TSRS)

#include <stdio.h>
int sort (int *a,int n)
{
    int temp;
    for (int i = 0; i <n-1; i++)
    {
        for (int j = 0 ; j <n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
            temp=a[j];
            a[i]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
 
   
}
print(int *a,int n)
{
     for (int i = 0; i < n; i++)
      {
        printf("%d ",a[i]);
      }
}
int main()
{
  int a[5000],n,i,key;
  printf("Enter size of array : ");
  scanf("%d",&n);
  printf("Enter element in array :");
  for (int  i = 0; i <n ; i++)
  {
    scanf("%d",&a[i]);
  }
  sort(a,n);
  print(a,n);
}