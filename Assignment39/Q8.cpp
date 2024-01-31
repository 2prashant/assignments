// 8. Create two forward lists of int type, and swap the elements of both forward lists with
// each other.


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
    l1.swap(l2);
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

}