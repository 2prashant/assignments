 /*                    More on Recursion in C Language
1. Write a recursive function to calculate sum of first N natural numbers.
*/
#include<stdio.h>
int main()
{
    int naturalnum(int num);
    int n;
    printf("Sum of first n natural number\n Enter number=");
    scanf("%d",&n);
    printf("%d",naturalnum(n));
    return 0;
}
int naturalnum(int num)
{
    int s;
   { 
     if(num==0)
     return 0;
     s=num+naturalnum(num-1);
   }
   return s;
}