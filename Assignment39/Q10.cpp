/*

10. Write a program to assign values in forward_list using the values of another list.

*/
#include<iostream>
#include<forward_list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    forward_list<int> l1={1,2,3,4};
    forward_list<int> l2;
    l2.assign(l1.begin(),l1.end());
    for(auto itr:l2)
    {
        cout<<itr<<" ";
    }
    return 0;
}