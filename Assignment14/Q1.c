/*                                Array in C Language

1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
array values from the user.
*/
#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("Enter 10 number");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("sum=%d",sum);
    return 0;

}