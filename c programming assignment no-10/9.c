/* Write a function to check whether a given number contains a given digit or not. 
(TSRS)
 */

#include<stdio.h>
int main()
{
	int n,num,digit,rem;
	scanf("%d %d",&num,&digit);
	n=num;
	while(num!=0)
	{
		rem=num%10;
		if(rem==digit)
		{
			printf("%d is occured in %d",digit,n);
			return 0;
		}
		num/=10;
	}
	printf("%d is not occured in %d",digit,n);
	return 0;
}
		