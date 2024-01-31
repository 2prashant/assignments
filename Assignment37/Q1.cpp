   //                             STL:vector

//1. Declare a vector with Initialization and print the elements.
#include<iostream>
#include<vector>
#include<iterator>
#include<tuple>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=0;i<5;i++)
    {
        v.push_back(i*100);
    }
   vector<int>::iterator x;
    for(auto x=v.rbegin();x!=v.rend();x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;
    //approach 2
    x=v.begin();
    for(int i=0;i<v.size();i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}