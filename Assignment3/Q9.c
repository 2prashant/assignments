/*9. Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times.
*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter three number");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("greatest number=%d",num1);
        }
        
    }
    if(num2>num1)
    {
        if(num2>num3)
     {
        printf("greastest number=%d",num2);
     }
     else
     {
        printf("greastest number=%d",num3);
     }
    }
    return 0;
}