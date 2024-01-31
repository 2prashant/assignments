/*
5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.
*/
#include<stdio.h>
int main()
{
    int duplicate(int arr[],int n);
    int arr[1000],n,i;
    printf("enter array size=");
    scanf("%d ",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Duplicate value=%d",duplicate(arr,n));
}
int duplicate(int arr[],int n)
{
    for(int i=0; i<=n; i++)
    {
       {
        if(arr[i]==arr[i+1])
        {
            return arr[i];
        }
       }
    }
     
}
