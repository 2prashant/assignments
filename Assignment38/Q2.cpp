/*
2. Assign the elements to the list (different methods) - Example of list::assign() | C++
*/
#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int>l1;
    int size;
    cout<<"Enter list size";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int value;
        cin>>value;
        l1.push_back(value);
    }
    cout<<endl;
    list<int>::iterator x;
    for(auto x=l1.begin();x!=l1.end();x++)
    {
        cout<<*x<<" ";
    } 
    cout<<endl;
    list<int> l2;
    l2.assign({1,2,3,4,5,6,12,13,19});
    list<int>::iterator z;
    for(auto z=l2.begin();z!=l2.end();z++)
    {
        cout<<*z<<" ";
    }
    cout<<endl;
    list<int> l3;
    l3.assign(6,33); 
    list<int>::iterator y;
    for(auto y=l3.begin();y!=l3.end();y++)
    {
        cout<<*y<<" ";
    }
    cout<<endl;
    list<int> l4;
    cout<<"Enter size=";
    int val;
    cin>>val;
    for(int i=0;i<size;i++)
    {
        int v;
        cin>>v;
        l4.push_front(v);
    }
    list<int>::iterator p;
    for(p=l4.begin();p!=l4.end();p++)
    {
        cout<<*p<<" ";
    }
}