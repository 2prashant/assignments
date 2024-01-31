/*
8. Write a program to find the second smallest number in an array.Take array values
from the user.
*/
#include<stdio.h>
int main()
{
    int arr[10],temp;
    printf("\nEnter 10 number:");
    for(int i=0;i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=9; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<=9;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n Second smallest number=%d",arr[1]);
}