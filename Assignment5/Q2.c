//2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("print first N natural number \n Enter number=");
    scanf("%d",&num2);
    printf("Natural number");
    for(num1=1;num1<=num2;num1++)
    {
        printf("%d ",num1);
    }
    return 0;
}