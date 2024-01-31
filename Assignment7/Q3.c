//3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
    int num,pri=0,curr=1,fib=0,i;
    printf("print given number is there in the fibonacci series\n enter number=");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        fib=pri+curr;
        if(num==fib)
        {
            printf("fibonacci number");
            break;
        }
         pri=curr;
         curr=fib;
    }
    if(num!=fib)
    {
        printf("not fibonacci number");
    }
}
