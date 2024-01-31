//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int main()
{
    int sort(int arr[10]);
    int arr[10];
    for(int i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr);
}
int sort(int arr[10])
{
    int temp=0;
    for(int i=0;i<=9; i++)
    {
        for(int j=1+i; j<10;j++)
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
    printf("%d ",arr[i]);

}