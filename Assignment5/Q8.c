//8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("print squares of the first N natural numbers\n Enter number");
    scanf("%d",&num2);
    printf("square of N natural number");
    for(num1=1;num1<=num2;num1++)
    {
        printf("%d ",num1*num1);
    }
    return 0;

}