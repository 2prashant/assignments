/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.
*/
#include<stdio.h>
int main()
{
    int m,p,c,cs,e,result;
    printf("enter marks in 5 subject\n");
    printf("Mathmactices=");
    scanf("%d",&m);
    printf("Physics=");
    scanf("%d",&p);
    printf("chemistry=");
    scanf("%d",&c);
    printf("compucter science=");
    scanf("%d",&cs);
    printf("english=");
    scanf("%d",&e);
    if(m>=33 && p>=33 && c>=33 && c>=33 && cs>=33 && e>=33)
    {
        printf("You are passed");
    }
    else
    {
        printf("you are fall");
    }



}