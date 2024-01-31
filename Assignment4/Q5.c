// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int num;
    printf("print the first 10 odd natural numbers in reverse order=");
    for(num=20;num>=1;num--)
    {
        if(num%2!=0)
        {
          printf("%d ",num);
        }
    }
    return 0;
}