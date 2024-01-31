// Assignment-48: A Job Ready Bootcamp in c++,DSA and IOT

// multimap

//1. Write a c++ program to demonstrate the implementation of multimap
#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    multimap<int,int,greater<int>> map1;
    map1.insert(pair<int,int>(1,13));
    map1.insert(pair<int,int>(1,10));
    map1.insert(pair<int,int>(5,20));
    map1.insert(pair<int,int>(2,30));
    map1.insert(pair<int,int>(15,40));
    multimap<int,int>::iterator itr;
    for(itr=map1.begin();itr!=map1.end();itr++)
    {
        cout<<"Key"<<itr->first<<" "<<"value:"<<itr->second<<endl;
    }
    multimap<int,int> map2(map1.begin(),map1.end());
    multimap<int,int>::iterator itr2;
    for(itr2=map1.begin();itr2!=map1.end();itr2++)
    {
        cout<<"Key:"<<itr2->first<<" value:"<<itr2->second<<endl;
    }
    

}
