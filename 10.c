/* Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage */ 
#include<stdio.h>
int main()
{
    float costprice,sellingprice,cp,sp,a,b;
     printf("Enter a costprice and sellingprice");
     scanf("%f%f",&costprice,&sellingprice);
     if (costprice > sellingprice)
     {
        a=costprice-sellingprice;
        //cp=a/sellingprice *100;
        printf("loss %f",cp);
     }
     else if(sellingprice > costprice)
     { 
        b=sellingprice - costprice;
        //sp=b/costprice*100;
        printf(" profit ",sp);
     }
     else
     {
        printf("no profit , no loss");
     }
     return 0;
}