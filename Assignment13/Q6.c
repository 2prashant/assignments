//6. Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int main()
{
    int factnum(int num);
    int num;
    printf("Enter number=");
    scanf("%d",&num);
    printf("\nfactorial=%d",factnum(num));
}
int factnum (int num)
{
    if(num>0)
    {
        return num*factnum(num-1);
    }
    if(num==0)
    return 1;
}