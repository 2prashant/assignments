//4. Write a program to calculate sum of squares of first N natural numbers.
#include<stdio.h>
int main()
{
   int num1,num2,sum=0;
   printf("sum of squares of first N natural number\nenter number=");
   scanf("%d",&num2);
   for(num1=1;num1<=num2;num1++)
   {
      printf("%d ",num1);
      sum=sum+num1;
   }
   printf("\nsum=%d",sum);
   return 0;


}
