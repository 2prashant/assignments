//3. Write a program to calculate sum of first N odd natural numbers.
#include<stdio.h>
int main()
{
    int num1,num2,sum=0;
    printf("sum of first N odd natural number\n enter number");
    scanf("%d",&num2);
    for(num1=1;num1<=num2;num1++)
    {
        if(num1%2!=0)
        {
            printf("\n%d",num1);
            sum=sum+num1;
        }
    }
    printf("\nsum=%d",sum);
    return 0;
}