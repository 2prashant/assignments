// 3. Create a c++ program using multiset and returns the number of elements in the
// multiset –> O(1)
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
    cout<<mset.size();
}