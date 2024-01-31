//3. Write a c++ code for illustration of multimap::swap() function.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    multimap<int,int> map1;
    multimap<int,int> map2;
    map1.insert(pair<int,int>(1,10));
    map1.insert(pair<int,int>(2,20));
    map1.insert(pair<int,int>(3,30));
    cout<<"Map1:"<<endl;
    for(auto itr:map1)
    {
        cout<<"Key : "<<itr.first<<" value : "<<itr.second<<endl;
    }
    map2.insert(pair<int,int>(9,90));
    map2.insert(pair<int,int>(8,80));
    map2.insert(pair<int,int>(7,70));
    cout<<"============================"<<endl;
    cout<<"Map2:"<<endl;
    for(auto itr2:map2)
    {
        cout<<"Key : "<<itr2.first<<" value : "<<itr2.second<<endl;
    }
    cout<<"============================"<<endl;
    map1.swap(map2);
    cout<<"Map1:"<<endl;
    for(auto itr:map1)
    {
        cout<<"Key : "<<itr.first<<" value : "<<itr.second<<endl;
    }
     cout<<"============================"<<endl;
    cout<<"Map2:"<<endl;
    for(auto itr2:map2)
    {
        cout<<"Key : "<<itr2.first<<" value : "<<itr2.second<<endl;
    }
}