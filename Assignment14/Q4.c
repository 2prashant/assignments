/*
4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.
*/
#include<stdio.h>
int main()
{
    int num[10],i,max=-1;
    printf("find greastest number stored in array\n Enter positive  number=");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    {
    for(int i=0; i<=9;i++)
        if(max<num[i])
        {
            max=num[i];
        }
    }
    printf("max number=%d",max);
    return 0;
}
    
