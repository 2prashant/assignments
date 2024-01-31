// 6. Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter TWO number");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf(" Greater number=%d",num1);
    }
    if(num1<num2)
    {
        printf("Greater number=%d",num2);
    }
    if(num1==num2)
    {
        printf("Equal number");
    }
    return 0;
}