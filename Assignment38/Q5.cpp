/*
5. Input and add elements to a list C++ STL
*/
#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int> l1;
    cout<<"Enter size : ";
    int size;
    cin>>size;
    int value;
    for(int i=0;i<size;i++)
    {
        cin>>value;
        l1.push_back(value);
    }
    for(auto itr:l1)
    {
        cout<<itr<<" ";
    }
    return 0;
}
