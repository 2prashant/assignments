/* 1. Write a program to print unit digit of a given number
*/
#include<stdio.h>
int main()
{
    int num;
   printf("enter numbers");
   scanf("%d",&num);
   num=(num%10);
   printf("unit digit=%d",num);
   return 0;
}