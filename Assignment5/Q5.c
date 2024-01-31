//5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("print first N odd natural number in reverse order\n enter number=");
    scanf("%d",&num2);
    printf("odd natural number");
    for(num1=num2;num1>=1;num1--)
    {
        if(num1%2!=0)
        {
          printf("%d ",num1);
        }
    }
    return 0;
}