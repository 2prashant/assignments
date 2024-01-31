 /*                      Iterative Control Statements (Part - 2)
1. Write a program to find the Nth term of the Fibonnaci series.
*/
#include<stdio.h>
int main()
{
    int num,pri=0,curr=1,fibonn=0;
    printf("print Fibonnaci series\nenter number=");
    scanf("%d",&num);
    for(int i=0;i<=num-3;i++)
    {
           fibonn=pri+curr; 
            pri=curr;
            curr=fibonn;
    }
    printf(" fibonnaci number=%d",fibonn);
    return 0;
}
