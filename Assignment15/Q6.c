/*
6. Write a function in C to read n number of values in an array and display it in reverse
order.
*/
#include<stdio.h>
int main()
{
    int arr[1000],n;
    printf("Enter array size=");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=n; i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}

