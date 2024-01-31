/*
6. Get the first and last element of the list C++ STL

*/
#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    list<int> l1;
    int size,value;
    cout<<" Enter List size : ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>value;
        l1.push_back(value);
    }
    list<int>::iterator itr;
    for(itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<"\nFirst value : "<<l1.front()<<endl;
    cout<<"\nLast value : "<<l1.back()<<endl;

}
