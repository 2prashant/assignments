#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
         int pivot=arr[i];
         int j=i-1;
        while(arr[j]>pivot && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=pivot;
    }
};
     int main()
     {
        int arr[]={12,23,34,8,65,4,9};
        insertionsort(arr,7);
        for(int i=0;i<7;i++)
         cout<<arr[i]<<" ";
         return 0;
     }
