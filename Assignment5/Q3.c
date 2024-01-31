// 3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("print first N natural number in reverse order\n enter number");
    scanf("%d",&num2);
    printf(" Reverse order natural number=");
    for(num1=num2;num1>=1;num1--)
    {
        printf("%d ",num1);
    }
    return 0;
}