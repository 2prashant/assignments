// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float costp,sellp,x;
    printf("enter selling price=");
    scanf("%f",&sellp);
    printf("enter cost price=");
    scanf("%f",&costp);
    x=(sellp-costp)*100/costp;
    if(sellp>costp)
    {
        printf("profit=%fpercentage",x);
    }
    else
    {
        printf("loss=%fpercentage",x);
    }
    return 0;

}