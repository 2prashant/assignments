//6. Using STL to check whether an array is empty or not.
#include<iostream>
#include<array>
using namespace std;
int main()
{
    int x;
    array<int,0>arr1={};
    array<int,4>arr2={1,2,3,4};
    cout<<arr2.empty();
    cout<<arr1.empty();
    if(arr2.empty())
    {
        cout<<" Array is  empty"<<endl;
        
    }
    else
    {
        cout<<"Array is not empty"<<endl;
    }
    if(arr1.empty())
    {
        cout<<" Array is  empty"<<endl;
        
    }
    else
    {
        cout<<"Array is not empty"<<endl;
    }
}