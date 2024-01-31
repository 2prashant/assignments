/*11. Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)
*/
// NOT SLOVE
#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    printf("enter number");
    scanf("%d%d",&num1,&num3);
    num2=num1*10;
    num4=num2+num3;
    printf("number=%d and digit=%d then the resulting number is %d",num1,num3,num4);
    return 0;

}