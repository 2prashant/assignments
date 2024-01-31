// 5. Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
   /* int num;
    int first ,second,last;
       printf("enter three number");
       scanf("%d",&num);
       first=num/100;
       second=(num/10)%10;
       last=num%10;
       printf("sum=%d",first+second+last);
       */
      int num,num1,num11,num2,num12,num3,num13;
      printf("enter number");
      scanf("%d",&num);
       num1=num/10;
       num11=num%10;
       num2=num1/10;
       num12=num1%10;
       num3=num2/10;
       num13=num2%10;
       printf("sum of digit number=%d",num11+num12+num13);
}