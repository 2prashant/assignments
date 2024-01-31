// 6. Create a c++ program using multiset and inserts the element x in the multiset –>
// O(log n)

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
    for(auto ptr:mset)
    {
        cout<<ptr<<" ";
    }

}