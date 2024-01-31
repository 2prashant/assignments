/*

                                       forward_list

1. Write a c++ code, to demonstrate the forward list.

*/
#include<iostream>
#include<list>
#include<forward_list>
#include<iterator>
using namespace std;
int main()
{
    forward_list<int> l1;
    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    for(auto itr:l1)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    l1.pop_front();
    l1.emplace_front(100);
    forward_list<int>::iterator itr;
    for(itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    l1.insert_after(l1.begin(),{1,2,3});
    for(itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    l1.emplace_after(l1.begin(),34);
    for(itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    l1.erase_after(l1.begin(),l1.end());
   
    for(itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    l1.push_front(10);
    l1.push_front(10);
    l1.insert_after(l1.begin(),{1,1,1,2,2});
    for(itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    l1.remove(1);
    for(itr=l1.begin();itr!=l1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    l1.push_front(12);
    l1.push_front(9);
    l1.insert_after(l1.begin(),{3,4,5,6});
    l1.insert_after(l1.begin(),{15,20,30,40});
    for(auto itr1:l1)
    {
         cout<<itr1<<" ";
    }
    cout<<endl;
    l1.remove_if([](int x){return x>10;});
     cout<<"==============="<<endl;
    for(auto itr1:l1)
    {
         cout<<itr1<<" ";
    }
    cout<<endl;
    forward_list<int> l2={99,88,77,66,55,44};
    l2.splice_after(l2.begin(),l1);
    for(auto itr1:l2)
    {
         cout<<itr1<<" ";
    }
    cout<<"\nClear\n"<<endl;
    l1.clear();
    for(auto itr1:l1)
    {
         cout<<itr1<<" ";
    }
    return 0;
}














// int main()
// {
//     list<int> l1;
//     list<int> l2;
//     list<int> l3;
   
//        for(int i=0;i<5;i++)
//       {
//         int y;
//         cin>>y;
//         l1.push_back(y);
//      }
//      l1.push_front(11);
//      l1.push_front(22);
//      l1.pop_back();
//      l1.pop_front();
//     list<int>::iterator l;
//     for(auto l=l1.begin();l!=l1.end();l++)
//     {
//         cout<<*l<<" ";
//     }
//     cout<<endl;
//     cout<<"size of l1 list="<<l1.size()<<endl;
//     cout<<"Front element in l1 List"<<l1.front()<<endl;
//     cout<<"Last element in l1 List"<<l1.back()<<endl;
//     l2.assign({1,2,3,4,});
//     list<int>::iterator z;
//     for(auto z=l2.begin();z!=l2.end();z++)
//     {
//         cout<<*z<<" ";
//     }
//     cout<<endl;
//     l3.assign(5,10);
//     list<int>::iterator x;
//     for(auto x=l3.begin();x!=l3.end();x++)
//     {
//         cout<<*x<<" ";
//     }
//    return 0;
// }