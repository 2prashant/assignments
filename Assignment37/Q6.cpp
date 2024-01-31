//6. Write a program to reverse vector elements.
#include<iostream>
#include<iterator>
#include<tuple>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v{23,6,8,1,9,2,25};
    for(int i=0; i<v.size() ;i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    reverse(v.begin(),v.end());
    cout<<"In Reverse order"<<endl;
    vector<int>::iterator z;
    z=v.begin();
    for(auto i=0; i<v.size(); i++)
    {
        cout<<z[i]<<" ";
    }
    return 0;
}

