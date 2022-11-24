//write a function to sort an array of int type value.[ void sort(int *ptr,int size);]
#include<stdio.h>
void Sort(int size, int *ptr )
{
	int i,j;
	int temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(*(ptr+j)< *(ptr+i))
			{
			   temp=*(ptr+i);
			   *(ptr+i)=*(ptr+j);
			   *(ptr+j)=temp;
			   	
			}
		}
	}
	for(i=0;i<size;i++)
		printf("%d",*(ptr+i));
}
int main()
{
	int size=5;
	int arr[]={4,1,3,9,0};
	Sort(size,arr);
	return 0;
}
