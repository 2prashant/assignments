//6. Write a program to print the first N even natural numbers.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("print the first N even natural number\nenter number");
    scanf("%d",&num2);
    for(num1=2;num1<=num2;num1++)
    {
        if(num1%2==0)
        {
            printf("%d ",num1);
        }
    }
    return 0;
}