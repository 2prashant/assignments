//10. Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int num,x,remainder,reverse=0;
    printf("print reverse a given number\nEnter number=");
    scanf("%d",&num);
    while(num!=0)
    {
        
         remainder=num%10;
         num=num/10;
         reverse=reverse*10+remainder;
  
    }
    printf("\nreverse order=%d",reverse);
    return 0;
}