/*
9. C++ program to find the integers which come an odd number of times in an array
using C++ STL.
*/
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    int arr[11]={1,1,1,4,5,4,3,7,7,7,5};
    int arr2[10]={0};
    for(int i=0;i<11;i++)
    {
        arr2[arr[i]]++;
    }
    for(int i=0;i<10;i++)
    {
        if(arr2[i]%2!=0)
        cout<<"Number="<<i<<" frequence="<<arr2[i]<<endl;
    }

    return 0;

}

