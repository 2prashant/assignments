#include<iostream>
using namespace std;
int main()
{
    int arr[11]={1,2,3,4,5,4,3,7,8,9,2};
    int arr2[10]={0};
    for(int i=0;i<11;i++)
    {
        arr2[arr[i]]++;
    }
    for(int i=0;i<10;i++)
    {
        if(arr2[i]!=0)
        cout<<"Number="<<i<<" frequence="<<arr2[i]<<endl;
    }
}