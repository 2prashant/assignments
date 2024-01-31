// 3. Create a C++ program to implement the deque of pairs.
#include<bits/stdc++.h>
#include<iostream>
#include<deque>
#include<utility>
using namespace std;
int main()
{
    deque<pair<int,char>> pairdeque;
    pairdeque.push_back(make_pair(1,'A'));
    pairdeque.push_back(make_pair(2,'B'));
    pairdeque.push_back(make_pair(3,'C'));
    pairdeque.push_back(make_pair(4,'D'));
    
    for(const auto& itr:pairdeque)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    cout<<"\n\n\n";
    pairdeque.pop_back();
    pairdeque.pop_front();
    for(const auto& itr:pairdeque)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }



}