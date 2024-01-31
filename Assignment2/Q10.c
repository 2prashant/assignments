/*10. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)
*/
#include<stdio.h>
int main()
{
    int x,y=0,z=0;
    printf("enter numbers X=");
    scanf("%d",&x);
    x=x/10;
    x=x*10;
    printf("x=%d",x);
}
