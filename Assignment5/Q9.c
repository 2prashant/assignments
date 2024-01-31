//9. Write a program to print cubes of the first N natural numbers.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("print cubes of the first N natural numbers \n Enter numner");
    scanf("%d ",&num2);
    printf("cubes of the first N natural numbers:");
    for(num1=1;num1<=num2;num1++)
    {
        printf("%d ",num1*num1*num1);
    }
    return 0;

}