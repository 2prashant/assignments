//8. Write a program to find next Prime number of a given number.
#include<stdio.h>
int main()
{
    int num,n,i,flag=0;
    printf(" find next number of a given number\n enter number=");
    scanf("%d",&num);
    for(n=num;1;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf(" next prime number= %d",n);
            break;
        }
    }
    return 0;
}