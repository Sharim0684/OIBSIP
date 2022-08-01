/* Write a program which takes the day number of a week and displays a
unique greeting message for the day */

#include<stdio.h>
int main()
{
    int a,b,x;
    printf("Enter a day number of a week ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
    printf("sunday\nYou are the brightest star on Earth. On this happy Sunday morning, I wish you to have the best day possible. Read more:");
    break;
    case 2:
    printf("monday\nDo you know what's special about a Monday morning? It gives you a start point for your journey to success for the entire week. Make the best out of it.");
    break;
    case 3:
    printf("tuesday\nGood morning on a delightful Tuesday. May today bring you more blessings and happy memories than yesterday");
    break;
    case 4:
    printf("wednesday\nWednesdays can be beautiful too if you know how to utilize them. So, don't be sad, work hard!");
    break;
    case 5:
    printf("thursday\nBeter days are just around the corner. They are called Friday, Saturday and Sunday! - Unknown");
    break;
    case 6:
    printf("friday\nThere is nothing impossible and once you have decided, you can really make it happen");
    break;
    case 7:
    printf("saturday\nMake your weekend shine with smile and happiness!");
    break;
    default:
    printf("invalid number");
        break;
    }
}