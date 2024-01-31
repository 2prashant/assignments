/*
5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
*/
#include<stdio.h>
int main()
{
    int num[10],min=9999;
    printf("find smallest number\n enter number=");
    for(int i=0;i<=9;i++)
   { 
      scanf("%d",&num[i]);
   }
     for(int i=0;i<=9; i++)
     {
        if(min>num[i])
        {
            min=num[i];
        }
     }
    printf("%d",min);
    return 0;
}
