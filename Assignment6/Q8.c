// 8. Write a program to check whether a given number is a Prime number or not.
#include<stdio.h>
int main()
{
    int num,num1,new=0;
    printf("check number prime number or not\n");
    printf("enter number=");
    scanf("%d",&num);
    for(num1=2;num1<num;num1++)
    {
        if(num%num1==0)
        {
             new=1;
             break;
        }
    }
    if(new)
    {
        printf("not prime number");
    }
    else{
        printf("prime number");
    }
    return 0;
}
