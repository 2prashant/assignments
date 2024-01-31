//8. Create a stack of int type and sort it in descending order.
#include<iostream>
#include<stack>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    stack<int> s1;
    int size,value;
    cout<<"Enter stack size : ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>value;
        s1.push(value);
    }
    vector<int> v;
    while(!s1.empty())
    {
        v.push_back(s1.top());
        s1.pop();
    }
    sort(v.begin(),v.end(),greater<int>());
    while(!v.empty())
    {
        s1.push(v.back());
        v.pop_back();
    }
    while(!s1.empty())
    {
         cout<<s1.top()<<" ";
         s1.pop();
    }

}