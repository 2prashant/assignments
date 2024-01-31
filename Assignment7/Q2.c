//2. Write a program to print first N terms of Fibonacci series.
#include<stdio.h>
int main()
{
    int num,i,pri=0,curr=1,next=0;
    printf("print nth term of Fibonnanci series:\nEnter number=");
    scanf("%d",&num);
    printf("Fibonnaci series=");
    printf("1");
    for(i=0;i<=num-1;i++)
    {
          next=pri+curr;
          printf(" %d ",next);
          pri=curr;
          curr=next;
    }
    return 0;
}