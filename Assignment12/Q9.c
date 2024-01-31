//9. Write a recursive function to print octal of a given decimal number.
#include<stdio.h>
int main()
{
    void octtobin(int n);
    int num;
    printf("Enter number=");
    scanf("%d",&num);
    octtobin(num);
}
void octtobin(int n)
{
    if(n>0)
    octtobin(n/8);
    printf("%d",n%8);
}