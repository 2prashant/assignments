// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
    int num,res;
    printf("Enter a number");
    scanf("%d",&num);
    res=num&1;
    if(res==1)
    {
        printf("odd number");
    }
    else{
        printf("even number");
    }

}
