//4. Write a recursive function to print first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    void oddnum(int num);
    int n;
    printf("print first N odd number in reverse order\n Enter number=");
    scanf("%d",&n);
    oddnum(n);
}
void oddnum(int num)
{
    if(num==0)
    return ;
    if(num%2!=0)
    printf("%d ",num);
    oddnum(num-1);
}
