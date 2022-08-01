/* Write a program which takes the month number as an input and display
number of days in that month*/

#include <stdio.h>
int main()
{
    int i, s;
    printf("Enter a month number");
    scanf("%d", &i);
    switch (i)
    {
        case 1:
        printf("month is january and number of days in january is 31 ");
        break;
        case 2:
        printf("month is february and number of days in february is 28 ");
        break;
        case 3:
        printf("month is march and number of days in march is 31 ");
        break;
        case 4:
        printf("month is april and number of days in april is 30 ");
        break;
        case 5:
        printf("month is may and number of days in may is 31 ");
        break;
        case 6:
        printf("month is june and number of days in june is 30 ");
        break;
        case 7:
        printf("month is july and number of days in july is 31 ");
        break;
        default:
        printf("invalid number");
        break;
        case 8:
        printf("month is august and number of days in august is 31 ");
        break;
        case 9:
        printf("month is september and number of days in september is 30 ");
        break;
        case 10:
        printf("month is october and number of days in octomber is 31");
        break;
        case 11:
        printf("month is november and number of days in november is 30 ");
        break;
        case 12:
        printf("month is december and number of days in december is 31 ");
        break;

    }

}