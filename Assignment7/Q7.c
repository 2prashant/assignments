//7. Write a program to print all Prime numbers between two given number
#include<stdio.h>
int main()
{
    int num1,num2,i,flag=0,n;
    printf("print number between two number\nEnter two number");
    scanf("%d%d",&num1,&num2);
    printf("prime number=");
    for(n=num1;n<=num2;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
            if((n%i==0))
            {
                flag=1;
            }
        }
        if(flag==0)
       {
        printf(" %d ",n);
       }
    
    }

    return 0;


}

