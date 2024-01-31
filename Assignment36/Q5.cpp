/*
5. C++ STL program to demonstrate example of array::rbegin() and array::rend()
functions.
*/
#include<iostream>
#include<array>
#include<iterator>
using namespace std;
int main()
{
    array<int,5> arr;
    for(int i=0; i<arr.size();i++)
    {
        cin>>arr[i];
    }
    for(auto atr=arr.rbegin(); atr!=arr.rend();atr++)
    {
        cout<<*atr<<" ";
    }

}
