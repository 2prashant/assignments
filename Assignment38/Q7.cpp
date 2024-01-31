/*

7. Insert the element at beginning and end of the list | C++ STL

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_front(9);
    l1.push_front(8);
    for(auto itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<endl;
    }
   return 0;
}