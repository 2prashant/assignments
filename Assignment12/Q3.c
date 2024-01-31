// 3. Write a recursive function to print first N odd natural numbers.
#include<stdio.h>
int main()
{
    void oddnum(int num);
    int n;
    printf("print first n odd number\n Enter number=");
    scanf("%d",&n);
    oddnum(n);
}
void oddnum(int num)
{
    if(num==0)
     return ;
    oddnum(num-1);
    if(num%2!=0)
    printf("%d ",num);
}