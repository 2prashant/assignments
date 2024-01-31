// 4. Write a program to erase all the entries of the key.
#include<iostream>
#include<map>
#include<iterator>
//#include<algorithm>
using namespace std;
int main()
{
    multimap<int,int> map1;
    map1.insert(pair<int,int>(1,10));
    map1.insert(pair<int,int>(1,45));
    map1.insert(pair<int,int>(2,20));
    map1.insert(pair<int,int>(3,30));
    map1.insert(pair<int,int>(4,40));
    multimap<int,int>::iterator itr;
    for(itr=map1.begin();itr!=map1.end();itr++)
    {
        cout<<"Key : "<<itr->first<<" Value : "<<itr->second<<endl;
    }
    map1.clear();
    for(itr=map1.begin();itr!=map1.end();itr++)
    {
        cout<<"Key : "<<itr->first<<" Value : "<<itr->second<<endl;
    }
}