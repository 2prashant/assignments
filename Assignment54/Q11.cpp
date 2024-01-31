//11. Create a function in Array to sort the given array
#include<iostream>
using namespace std;
int partation(int arr[],int start,int end)
{
    int pivot=arr[start];
    int count=0;
    for(int i=start;i<=end;i++)
    {
        if(pivot>arr[i])
        {
            count++;
        }
    }
    int pivotindex=start+count;
    swap(arr[start],arr[pivotindex]);
    int i=start, j=end;
    while(i<pivotindex && j>pivotindex)
    {
           while(arr[i]<pivot)
           {
                i++;
           }
           while (arr[j]>pivot)
           {
                j--;
           }
           if(i<pivotindex && j>pivotindex)
           {
                swap(arr[i],arr[j]);
           }
    }
    return pivotindex;
}
void quicksort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int p=partation(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);

}
int main()
{
    int arr[]={1,9,2,8,3,7,89,34,21,67};
    int size=sizeof(arr)/sizeof(int);
    quicksort(arr,0,size-1);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
