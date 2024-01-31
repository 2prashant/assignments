// unordered_multiset

// 1. Write a C++ program to initialise the unordered_multiset and print it on the screen.
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   unordered_multiset<int> ums1;
   unordered_multiset<int> ums2({1,3,1,7,2,3,4,1,6});
   ums1={2,7,2,5,0,3,7,5};
   typedef unorderd_multiset<int>::iterator umit;
   umit it=ums2.begin();
   for(;it!=ums2.end();it++)
   {
       cout<<*it<<" ";
   }
   return 0;
}