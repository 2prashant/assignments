// 8. Write a program to check whether the given number is even or odd using a bitwise operator. 
#include<stdio.h>
int main()
{
    int num,x,result;
    printf("enter a number");
    scanf("%d",&num);
    result=num&1;
    if(result==1)
    {
        printf("odd number");
    }
    else
    {
        printf("even number");
    }
}