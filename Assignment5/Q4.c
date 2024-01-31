//4. Write a program to print the first N odd natural numbers.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("print first N odd natural number\n enter number=");
    scanf("%d",&num2);
    printf("first N odd natural number=");
    for(num1=1;num1<=num2;num1++)
    {
        if(num1%2!=0)
        {
          printf("%d ",num1);
        }
    }
    return 0;
}