/*

3. Iterate a list C++ STL.

*/
#include<iostream>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;
int main()
{
    list<int> l1;
    int value;
    for(int i=0;i<5;i++)
    {
        cin>>value;
        l1.push_back(value);
    }
    cout<<endl;
    // for(auto itr:l1)
    // {
    //     cout<<itr<<" ";
    // }

    list<int>::iterator itr;
    for(itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    

}