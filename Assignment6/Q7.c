//7. Write a program to count digits in a given number.
#include<stdio.h>
int main()
{
    int num1,store,count=0;
    printf("count digit in a given number\n enter number=");
    scanf("%d",&num1);
      while(num1!=0)
      {
        count++;
        store=num1/10;
        num1=store;
        if(store==0)
        {
            break;
        }
      }
    printf("\ncount digit=%d",count);
}