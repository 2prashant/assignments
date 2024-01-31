// Assignment - 45 A Job Ready Bootcamp in C++, DSA and IOT

// multiset

// 1. Create a c++ program using multiset and returns an iterator to the first element in
// the multiset –> O(1)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    multiset<int,greater<int>> mset;
    mset.insert(10);
    mset.insert(9);
    mset.insert(5);
    mset.insert(45);
    mset.insert(23);
    mset.insert(12);
    mset.insert(10);
    mset.insert(10);
    mset.insert(23);
    mset.insert(45);
    auto x=mset.begin();
    cout<<"Begin element  of set :"<<*x<<endl;;
    multiset<int,greater<int>>::iterator itr;
    cout<<"\n 10 count : "<<mset.count(10)<<endl;;
    for(itr=mset.begin();itr!=mset.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    multiset<int> mset1;
    mset1.insert(99);
    mset1.insert(1);
    mset1.insert(88);
    mset1.insert(2);
    mset1.insert(77);
    mset1.insert(3);
    mset1.insert(66);
    for(auto itr1:mset1)
    {
        cout<<itr1<<" ";
    }
    cout<<endl;

     multiset<int> mset3(mset1.begin(),mset1.end());
     for(auto itr2:mset3)
     {
        cout<<itr2<<" ";
     }
     cout<<endl;
     mset3.erase(mset3.begin(),mset3.find(77));
     for(auto itr2:mset3)
     {
        cout<<itr2<<" ";
     }
     cout<<endl;
     int num;
     num=mset3.erase(99);
     cout<<num<<" removed"<<endl;
      for(auto itr2:mset3)
     {
        cout<<itr2<<" ";
     }
     cout<<endl;
     cout<<"\nmset1.lower_bound()=>"<<*mset1.lower_bound(66)<<endl;
     cout<<"\nmset1.upperbound=>"<<*mset1.upper_bound(66)<<endl;


     multiset<int> a;
     a.insert(10);
     a.insert(10);
     a.insert(10);
     for(auto itr:a)
     {
        cout<<itr<<" ";
     }
     cout<<endl;
     cout<<"10 count : "<<a.count(10)<<endl;;
    a.erase(a.find(10));
    cout<<endl;
     cout<<"10 count : "<<a.count(10);


}