//2. Write a recursive function to calculate sum of first N odd natural numbers.
#include<stdio.h>
int main()
{
    int oddnum(int num);
    int n;
    printf("Sum of first N odd number\n Enter number=");
    scanf("%d",&n);
    printf("\n%d",oddnum(n));
    return 0;
}
int oddnum(int num)
{
    int s;
     if(num==0)
      return 0 ;
     s=2*num-1+oddnum(num-1);  
     return s;
}