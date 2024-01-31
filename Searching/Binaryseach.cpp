#include<iostream>
using namespace std;
int binarysearch(int arr[],int size, int key)
{
    int start=0;
    int end=size-1;
  //  int mid=(start+end)/2; //not good approach
  int mid=start+(end-start)/2; // good approach
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int evenarr[6]={2,7,32,67,68,70};
    int oddarr[7]={3,6,9,45,55,78,90};
    cout<<"element 68 of index="<<binarysearch(evenarr,6,68)<<endl;
    cout<<"element 6 of index="<<binarysearch(oddarr,7,6)<<endl;
    cout<<"element 1 of index="<<binarysearch(evenarr,6,1)<<endl;
    cout<<"element 10 of index="<<binarysearch(oddarr,7,10)<<endl;
    return 0;   
}