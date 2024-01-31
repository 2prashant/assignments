/*18. Write a program which takes the month number as an input and display number of 
days in that mont
*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter month number");
    scanf("%d",&num);
    if(num==1)
    {
        printf("31 dayes");
    }
    else if(num==2)
    {
        printf("29 dayes");
    }
    else if(num==3)
    {
        printf("31 dayes");
    }
    else if(num==4)
    {
        printf("30 dayes");
    }
    else if(num==5)
    {
        printf("31 dayes");
    }
    else if (num==6)
    {
        printf("30 dayes");
    }
    else if (num==7)
    {
        printf("31 dayes");
    }
    else if(num==8)
    printf("31 dayes");
    else if(num==9)
    printf("30 dayes");
    else if(num==10)
    printf("31 dayes");
    else if(num==11)
    printf("30 dayes");
    else if(num==12)
    printf("31 dayes");
    else
    printf("Invalid month number");

}
