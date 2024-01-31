/*

2. Write a c++ code, in which create a forward list and assign values to it at the time of
initialization and print it on the console screen.

*/
#include<iostream>
#include<iterator>
#include<forward_list>
#include<algorithm>
using namespace std;
int main()
{
    forward_list<int> l1;
    l1.assign({1,2,3,4});
 
    forward_list<int>::iterator itr;
    for(itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    forward_list<int> l2;
    l2.assign(5,2);
    for(auto itr1:l2)
    {
        cout<<itr1<<" ";
    }
    cout<<endl;
    forward_list<int> l3;
    l3.assign(l1.begin(),l1.end());
    for(auto itr2:l3)
    {
        cout<<itr2<<" ";
    }
    cout<<"Hello"<<endl;

}