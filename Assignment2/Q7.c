// 7. Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int num,count=0,res=0;
    printf("enter number");
    scanf("%d",&num);
    while(num!=0)
 {
    res=num&1;
    count++;
    if(res==1)
    {
        printf(" first of position LBS=%d",count);
        break;
    }
    num=num>>1; 
 }
    return 0;
}

