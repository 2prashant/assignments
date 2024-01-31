//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); 
#include<stdio.h>
int main()
{
    void sort(int *arr[], int size);
    int arr[100],size;
    printf("Enter array size");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
      {
            if(arr[i]>arr[j])
        {
            int temp=0;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
    }
    for(int i=0;i<size;i++)
    {
      sort(&arr[i],size);
    }  
}
void sort(int *arr[], int size)
{
    for(int i=0;i<size;i++)
   { 
      printf("%d ",*arr[i]);
   }
}