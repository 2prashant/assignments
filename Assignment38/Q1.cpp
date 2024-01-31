/*

                                    list

1. List functions in C++ STL (Standard Template Library)
*/
#include<iostream>
#include<list>

#include<iterator>
using namespace std;
int main()
{
    list<int>l1;
    list<int>l2;
    list<int>l3;
    l1.assign({1,2,3,4,5});
    l2.assign(5,12);
    l3.assign(l1.begin(),l1.end());
    list<int>::iterator x;
    for(auto x=l1.begin();x!=l1.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    for(auto x=l2.begin();x!=l2.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    for(auto x=l3.begin();x!=l3.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
     x=l3.begin();
    x++;
    l3.insert(x,{34,56,78});
    for(x=l3.begin();x!=l3.end();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    return 0;
}