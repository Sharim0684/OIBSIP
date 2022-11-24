//write a function to swap string of two char arrays of calling function (TSRS)
#include<stdio.h>
void swap(char **,char **);
int main()
{
	char *str1="sharim";
	char *str2="shaikh";
	printf("\nbefore swapping str1=%s and str2=%s\n",str1,str2);
	swap(&str1,&str2);
	printf("\nafter swapping str1=%s and str2=%s\n",str1,str2);
	return 0;
}
void swap(char **ptr1,char **ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}

