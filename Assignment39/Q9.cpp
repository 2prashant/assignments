// 9. Write a C++ code to demonstrate working of splice_after() in forward list.
#include<iostream>
#include<iterator>
#include<forward_list>
#include<algorithm>
using namespace std;
int main()
{
     forward_list<int> l1;
     forward_list<int> l2;
     l1.assign({1,2,3,4,5});
     l2.assign({6,7,8,9,10});
     l1.splice_after(l1.begin(),l2);
     for(auto itr:l1)
     {
        cout<<itr<<" ";
     }
     
}