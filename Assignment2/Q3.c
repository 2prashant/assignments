// 3. Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter two value");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("swap value=%d %d",x,y);
    return 0;
}