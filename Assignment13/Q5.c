//5. Write a recursive function to calculate sum of digits of a given number.
#include<stdio.h>
int main()
{
    int digitsum(int num);
    int num;
    printf("Enter number=");
    scanf("%d",&num);
    printf("\nsum=%d",digitsum(num));
    return 0;
}
int digitsum(int num)
{
    if(num>0)
    {
     return digitsum(num/10)+num%10; 
    }

    
}
