// 3. Write a program to print the first 10 natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int num;
    printf("10 natural number in reverse order=");
    for(num=10;num>=1;num--)
    {
        printf("%d ",num);
    }
    return 0;
}