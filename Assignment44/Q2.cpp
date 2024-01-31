// 2. Using inbuilt function and insert an element to the set container.
#include<bits\stdc++.h>
using namespace std;
int main()
{
    set<char> ch;
    ch.insert('a');
    ch.insert('b');
    ch.insert('c');
    for(auto itr=ch.begin();itr!=ch.end();itr++)
    {
        cout<<*itr<<" ";
    }
    return 0;
}