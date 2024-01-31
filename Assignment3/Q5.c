// 5. Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
      if(99<num && num<=999)
     {
        printf("three-digit number");
    
     }
    else
    printf("not three-digit number");
}
