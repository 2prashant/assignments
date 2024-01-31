#include<iostream>
#include<unordered_set>
#include<iterator>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    // unordered_set<int>::iterator it;
    // for(it=s.begin();it!=s.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

   
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }

    cout<<"Number of element in set"<<s.size()<<endl;
    // s.clear();
    // cout<<"Number of element in set"<<s.size()<<endl;

    int key=20;
    if(s.find(key)==s.end())
    {
        cout<<"key not found"<<endl;
    }
    else
    {
        auto temp=s.find(key);
        cout<<"Key is found"<<endl;
    }


    int delecte_key=20;
    s.erase(delecte_key);

     for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
     if(s.count(5))
     {
          cout<<"Element is found"<<endl;
     }
     else
     {
         cout<<"Element is not found"<<endl;
     }
}