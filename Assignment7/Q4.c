// 4. Write a program to calculate HCF of two numbers.

/*
#include<stdio.h>
int main()
{
    int num1,num2,i,k,HCF;
    printf("calculate HCF of two number");
    scanf("%d%d",&num1,&num2);
    for(i=2;i<=num1*num2;i++)
    {
        if((i%num1==0) && (i%num2==0))
        {
            k=i;
            printf(" HCF=%d",HCF=(num1*num2)/k);
            break;
        }
    }
    return 0;
}

*/

#include<stdio.h>
int main()
{
    int num1,num2,hcf=0;
    printf("printf number co-prime or not\n Enter two number=");
    scanf("%d%d",&num1,&num2);
    int smv=num1<num2?num1:num2;
    for(int i=1;i<=smv;i++)
    {
        if((num1%i==0)&&(num2%i==0))
        {
             hcf=i;
          
        }
    }
    printf("HCF=%d",hcf);
}