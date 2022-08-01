/* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int x, a, b;
    while (1)
    {
        printf("\n1. addition");
        printf("\n2. subtraction");
        printf("\n3. multiplication");
        printf("\n4. division");
        printf("\n5. exit");
        printf("\n\nEnter your choice");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            printf("Enter a two number ");
            scanf("%d%d", &a, &b);
            printf("addition is %d:", a + b);
            break;
        case 2:
            printf("Enter a two number ");
            scanf("%d%d", &a, &b);
            printf("subtraction is %d:", a - b);
            break;
        case 3:
            printf("Enter a two number ");
            scanf("%d%d", &a, &b);
            printf("multiplication is %d:", a * b);
            break;
        case 4:
            printf("Enter a two number ");
            scanf("%d%d", &a, &b);
            printf("division is %d:", a / b);
            break;
        case 5:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
    return 0;
}
