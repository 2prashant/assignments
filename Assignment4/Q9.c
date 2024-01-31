//9. Write a program to print cubes of the first 10 natural numbers.
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("print cubes of the first 10 natural numbers=");
    for(num=1;num<=10;num++)
    {
        printf("%d ",num*num*num);
        sum=sum+num*num*num;
    }
    printf("\nsum=%d",sum);
    return 0;

}