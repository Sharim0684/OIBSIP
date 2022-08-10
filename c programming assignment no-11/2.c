/* Write a function to calculate HCF of two numbers. (TSRS) */

#include <stdio.h>
 int SI(int a ,int b)
    {
        //int a,b,
        int i;
        int hcf=1;
    int min = a < b ? a : b;
    for (i = 1; i <= min; i++)
    {
        if ((a % i == 0) && (b % i == 0))
            hcf = i;
    }
    printf("hcf is %d ", hcf);
    return a,b,min,i,hcf;
}
int main()
 {
    int i, a, b, hcf = 1;
    printf("Enter a number ");
    scanf("%d%d", &a, &b);
    SI(a,b);
 }