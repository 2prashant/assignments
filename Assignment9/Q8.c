/*
8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    switch(num>0)
    {
        case 1:
               printf("convert number=-%d",num);
               break;
        case 0:
              printf("convert number=+%d",num);
              break;
    }
    return 0;
}