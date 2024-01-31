//7. Create a stack of int type and sort it.
//#include<std/c++.h>
#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    stack<int> s1;
    int size,value;
   cout<<"Enter Stack Size ";
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
    sort(v.begin(),v.end());
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