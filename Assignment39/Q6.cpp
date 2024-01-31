/*

6. Create two forward lists of int type, and merge them.

*/
#include<iostream>
#include<iterator>
#include<forward_list>
#include<algorithm>
using namespace std;
int main()
{
    forward_list<int> l1;
    forward_list<int> l2;
    l1.assign({1,2,5,2,3});
    l2.assign({6,90,8,4});
    // l1.sort();
    // l2.sort();
    l1.merge(l2);
    for(auto itr:l1)
    {
        cout<<itr<<" ";
    }
    return 0;

}