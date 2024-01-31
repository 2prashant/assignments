//10. Write a program to print a table of 5
#include<stdio.h>
int main()
{
    int num,num1;
    printf("print table of 5 =");
    scanf("%d",&num1);
    for(num=1;num<=num1;num++)
    {
        if(num%5==0)
        {
            printf("%d ",num);
        }
    }
    return 0;
}