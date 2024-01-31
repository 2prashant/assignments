// 7. Sort a given map in descending order based on values instead of keys in C++ STL.
// Key value
// 1 6
// 2 8
// 6 3
// 8 2

#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
      map<int,int> mymap;
      mymap[8]=2;
      mymap[6]=3;
      mymap[2]=8;
      mymap[1]=6;

      mymap.
      for(auto itr:mymap)
      {
          cout<<"key:"<<itr.first<<" "<<" value : "<<itr.second<<endl;
      }
}