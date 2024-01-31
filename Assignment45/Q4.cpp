// 4. Create a c++ program using multiset and returns the maximum number of elements
// that the multiset can hold –> O(1)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int> mset;
    mset.insert(20);
    mset.insert(40);
    mset.insert(50);
    mset.insert(60);
    auto ptr=mset.end();
    cout<<"max element : "<<*(--ptr)<<endl;
    return *(--ptr);
}