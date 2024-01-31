// 2. Create a c++ program using multiset and returns an iterator to the theoretical
// element that follows the last element in the multiset –> O(1)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int> mset;
    mset.insert(9);
    mset.insert(8);
    mset.insert(7);
    mset.insert(60);
    mset.insert(5);
    mset.insert(4);
    multiset<int>::iterator itr;
    for(itr=mset.begin();itr!=mset.end();itr++)
    {
        cout<<*itr<<" ";
    }

    auto ptr=mset.end();
    ptr--;
    cout<<"\nLast element : "<<*ptr<<endl;
    return 0;
   
}