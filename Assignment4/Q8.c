// 8. Write a program to print squares of the first 10 natural numbers.
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("print first 10 natural number=");
    for(num=1;num<=10;num++)
    {
        printf("%d ",num*num);
        sum=sum+num*num;
    }
    printf("\nsum=%d",sum);
    return 0;
}