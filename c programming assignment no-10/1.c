/* Write a function to calculate the area of a circle. (TSRS) */
#include <stdio.h>
float circle(float);
int main()
{
    float r,a;
    printf("Enter radius of circle ");
    scanf("%f", &r);
    a = 3.14 * r * r;
    printf("area of circle is %f ",a);
    return 0;
}
float circle( float radius)
{
    return radius;
}