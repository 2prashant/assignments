/*

7. Below are two forward lists, first sort them and then merge them.
forwardlist1={3,2,9}
forwardlist2={8,1,2}

*/
#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list<int> l1={3,2,9};
    forward_list<int> l2={8,1,2};
    for(auto itr1:l1)
    {
        cout<<itr1<<" ";
    }
    cout<<endl;
    for(auto itr2:l2)
    {
        cout<<itr2<<" ";
    }
    l1.sort();
    l2.sort();
    cout<<endl;
    for(auto itr1:l1)
    {
        cout<<itr1<<" ";
    }
    cout<<endl;
    for(auto itr2:l2)
    {
        cout<<itr2<<" ";
    }
    l1.merge(l2);
    cout<<endl;
    for(auto itr1:l1)
    {
        cout<<itr1<<" ";
    }
      
}