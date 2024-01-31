// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number check divisible by 7 or 3=");
    scanf("%d",&num);
    if(num%7==0 || num%3==0)
    {
        printf("divisible by 7 or 3");
    }
    else{
        printf("Not divisible by 7 or 3");
    }
    return 0;
}