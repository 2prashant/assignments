#include<iostream>
using namespace std;
void selectiosort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        int temp;
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
     }  
}
void display(int arr[],int size)
{
    cout<<endl;
   for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter array size=";
    cin>>size;
    int arr[size];
     for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    selectiosort(arr,size);
    display(arr,size);
    return 0;
}