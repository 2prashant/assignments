//7.Sort an array in ascending order using sort() function in C++ STL
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
   int arr[5]={12,43,15,56,1};
    int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"Element of array"<<endl;
   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"array in ascending order"<<endl;;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     return 0;
}
