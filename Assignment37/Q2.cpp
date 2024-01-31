//2. Declare a vector without initialization, insert some elements and print.
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> x;
    cout<<"Enter vector size=";
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int v;
        cin>>v;
        x.push_back(v);
    }
    vector<int>::iterator z;
    z=x.begin();
    for(int i=0;i<x.size();i++)
    {
        cout<<z[i]<<" ";
    }
    return 0;
}