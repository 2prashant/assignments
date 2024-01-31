#include<iostream>
using namespace std;
int main()
{
    int arr1[11]={54,26,93,17,77,31};
    int arr2[11]={0};
    for(int i=0;i<=5;i++)
    {
        int x=arr1[i]%11;
        arr2[x]=arr1[i];
    }
    for(int i=0;i<11;i++)
    {
        cout<<arr2[i]<<" ";
    }
}