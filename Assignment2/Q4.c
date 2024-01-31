// 4. Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter number x=");
    scanf("%d",&x);
    printf("enter number y=");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("swap value=\n x=%d\ny=%d",x,y);
    return 0;
}