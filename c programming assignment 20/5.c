//write a program to find the maximum number between two number using a pointers

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a value of a and b ");
	scanf("%d%d",&a,&b);
	max(&a,&b);
}
void max(int *p , int *q)
{
	if(*p>*q)
	{
		printf("a=%d",*p);
	}
	if(*p<*q)
	{
		printf("b=%d",*q);
	}
}
