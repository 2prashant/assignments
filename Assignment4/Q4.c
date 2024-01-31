//4. Write a program to print the first 10 odd natural numbers.
#include<stdio.h>
int main()
{
    int num;
    printf("print the forst 10 odd natural numbers=");
    for(num=1;num<=20;num++)
    {
        if(num%2!=0)
        {
            printf("%d ",num);
        }
    }
}
