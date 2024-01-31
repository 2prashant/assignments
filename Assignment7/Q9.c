//9. Write a program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,num,count=0,rem,sum=0;
    printf("check number Armstrong number or not \n Enter number=");
    scanf("%d",&num);
    x=num;
    while(x!=0)
    {
        
        x=x/10;
        count++;
    }
    y=num;
    while(y!=0)
    {
         rem=y%10;
         y=y/10;
         sum+=pow(rem,count);
    }
    if(sum==num)
    {
        printf("Armstrong numner");
    }
    else
    {
        printf("Not Armstrong number");
    }
    return 0;
} 
    
