//5. Make a c++ program to insert unique element in set.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int> s;
    s.insert(9);
    s.insert(8);
    s.insert(7);
    s.insert(6);
    s.insert(5);
    s.insert(0);
    for(auto itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<" ";
    }
}
