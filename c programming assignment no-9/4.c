/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, a, b, c;

    while (1)
    {
        printf("\n1. Check whether a given set of three numbers are lengths of isosceles triangle or not");
        printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
        printf("\n3. Check whether a given set of three numbers are equilateral triangle or not");
        printf("\n4. exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        printf("Enter a length of 3 side of triangle ");
        scanf("%d%d%d", &a, &b, &c);
        switch (choice)
        {
        case 1:
            if (a == b || b == c || a == c)
                printf("isosceles");
            else
                printf("not an isosceles");
            break;
        case 2:
            if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (b * b) + (c * c) == (a * a))
                printf("right triangle");
            else
                printf("not a right triangle");
            break;

        case 3:
            if ((a == b && b == c))
                printf("equilater triangle");
            else
                printf("not a equilateral triangle");
            break;

        default:
            printf("invalid");
        }
    }
}
