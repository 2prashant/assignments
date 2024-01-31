/*13. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right
*/

#include<stdio.h>
int main()
{
    int num,r,m,opn;
    printf("enter three -digit number");
    scanf("%d",&num);
     r=num%10;
     m=num/10;
     opn=r*100+m;
     printf("%d",opn);
     return 0;

}