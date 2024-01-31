//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
int main()
{
    void evennum(int num);
    int n;
    printf("print first n even number\n Enter number=");
    scanf("%d",&n);
    evennum(n);
}
void evennum(int num)
{
    if(num==1)
    return ;
    evennum(num-1);
    if(num%2==0)
    printf("%d ",num);
}