// 5. Create a c++ program using multiset and returns whether the multiset is empty –>
// O(1)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int> mset;
    mset.insert(10);
    mset.insert(20);
    mset.insert(30);
    mset.insert(40);
    mset.insert(50);
    if(mset.empty())
    {
        return 0;
    }
    else
    {
        for(auto ptr: mset)
        {
            cout<<ptr<<" ";
        }
    }
    
}