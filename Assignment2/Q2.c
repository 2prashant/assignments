// 2. Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    num=(num/10);
    printf(" print Without its last digit=%d",num);
    return 0;


}