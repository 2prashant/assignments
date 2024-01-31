//7. Write a program to print the first 10 even natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int num;
    printf("10 even natural number in reverse order=");
    for(num=20;num>=2;num--)
    {
        if(num%2==0)
        {
            printf("%d ",num);
        }
    }
    return 0;
}