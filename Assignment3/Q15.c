// 15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("enter number check positive ,negative or Zero=");
    scanf("%d",&num);
    if(num>0)
    {
        printf("positive number");
    }
    if(num<0)
    {
        printf("negative number");
    }
    if(num==0)
    {
        printf("Equal to Zero");
    }
    return 0;
}