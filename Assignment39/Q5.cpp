/*

5. Write a program remove all consecutive duplicate elements from the forward list.

*/
#include<iostream>
#include<iterator>
#include<forward_list>
#include<algorithm>
using namespace std;
int main()
{
    forward_list<int> l1;
    l1.push_front(1);
    l1.insert_after(l1.begin(),2);
    l1.insert_after(l1.begin(),{3,3});
     l1.insert_after(l1.begin(),{8,8});
      l1.insert_after(l1.begin(),{9,9});
       l1.insert_after(l1.begin(),{11,11});
        l1.insert_after(l1.begin(),{15,15,15});
         l1.insert_after(l1.begin(),{19,19});
         l1.push_front(99);
           l1.push_front(99);

  

    for(auto itr:l1)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
   l1.erase_after(unique(l1.begin(),l1.end()),l1.end());
//    l1.unique(l1.begin(),l1.end());
    for(auto itr:l1)
    {
        cout<<itr<<" ";
    }

}