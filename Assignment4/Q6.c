//6. Write a program to print the first 10 even natural numbers/
#include<stdio.h>
int main()
{
    int num;
    printf("print first 10 even natural number=");
    for(num=1;num<=20;num++)
    {
        if(num%2==0)
        {
            printf("%d ",num);
        }
    }
    return 0;
}