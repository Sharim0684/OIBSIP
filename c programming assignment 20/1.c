//write a function to swap value of two variables of calling function(TSRS)
#include<stdio.h>
void swap(int *,int*);
int main()
{
  int a,b;
  printf("enter value of a and b ");
  scanf("%d%d",&a,&b);
  printf("before swaping a=%d and b=%d \n",a,b);
  swap(&a,&b);
  printf("after swaping a=%d and b=%d \n",a,b);
  
  return 0;
}
void swap(int *p ,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
