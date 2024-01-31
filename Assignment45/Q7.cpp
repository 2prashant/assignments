// 7. Create a c++ program using multiset and removes all the elements from the multiset
// –> O(n)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int> mset;
    mset.insert(3);
    mset.insert(1);
    mset.insert(9);
    mset.insert(8);
    mset.insert(77);
    mset.insert(11);
    for(auto ptr:mset)
    {
        cout<<ptr<<" ";
    }
    while(!mset.empty())
    {
        mset.erase(mset.begin());
    }
    if(mset.empty())
    {
        cout<<"\nset is empty"<<endl;
    }
    else
    {
        cout<<"\nset is not empty"<<endl;
    }
    return 0;

}