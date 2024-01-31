//7. Write a recursive function to print squares of first N natural numbers.
#include<stdio.h>
int main()
{
    void naturalnum(num);
    int n;
    printf("print squares of first N natural number\n enter number=");
    scanf("%d",&n);
    naturalnum(n);
}
 void naturalnum(num)
 {
    if(num==0)
     return ;
     naturalnum(num-1);
     printf("%d ",(num*num));
 }