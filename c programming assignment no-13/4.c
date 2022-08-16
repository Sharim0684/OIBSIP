/* Write a recursive function to calculate sum of digits of a given number */

#include <stdio.h>
int sum(int);
int main()
{
    int num, result;
    printf("Enter a  number");
    scanf("%d", &num);
    result = sum(num);
    printf("sum of digit is %d = %d ", num, result);
}
int sum(int num)

{
    if (num == 0)
        return 0;
    return (num % 10 + sum(num / 10));
}
 