// 4. Write a program to reverse forward list elements.
#include<iostream>
#include<forward_list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    forward_list<int> l1;
    l1.assign({1,2,3,4,5,6,7,8,9});
    for(auto itr: l1)
    {
        cout<<itr<<" ";
    }
    l1.reverse();
    cout<<"\nAfter Reverse : \n";
    for(auto itr: l1)
    {
          cout<<itr<<" ";
    }
}