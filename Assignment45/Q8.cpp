// 8. Create a c++ program using multiset and removes all the occurrences of x –> O(log
// n)
#include<iostream>
#include<iterator>
#include<set>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> mset;
    mset.insert(100);
    mset.insert(200);
    mset.insert(300);
    mset.insert(400);
    mset.insert(400);
    mset.insert(400);
    mset.insert(200);
    mset.insert(200);
    mset.insert(200);
    mset.insert(100);
    mset.insert(100);
    mset.insert(100);
    mset.insert(100);

    for(auto ptr:mset)
    {
       // cout<<mset.count(ptr)<<" ";
       if(mset.count(ptr)!=1)
       {
           mset.erase(ptr);
       }
       // cout<<ptr<<" "<<mset.count(ptr)<<endl;
    }
    cout<<endl;
  
    for(auto ptr:mset)
    {
        cout<<ptr<<" ";
    }

}