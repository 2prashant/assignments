//7. Write a program to print the first N even natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("first N even natural numbers in reverse\n enter number");
    scanf("%d",&num2);
    printf("even natural number:");
    for(num1=num2;num1>=2;num1--)
    {
        if(num1%2==0)
        {
            printf("%d ",num1);
        }
    }
    return 0;

}
