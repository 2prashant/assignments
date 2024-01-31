/*                                  Array and Functions in C Language

1. Write a function to find the greatest number from the given array of any size. (TSRS)
*/
#include<stdio.h>
int main()
{
    void greatnum(int arr[10]);
    int arr[10];
    printf("Enter 10 number");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    greatnum(arr);

}
void greatnum(int arr[10])
{
    int temp=0;
    for(int i=0;i<=9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]<arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
        printf("Second largest number=%d ",arr[1]);


}