// 8. Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("calculat leap year or not \n enter year");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("A LEAP YAER\n");
    }
    else{
        printf("NOT A LEAP YAER\n");
    }
return 0;
}