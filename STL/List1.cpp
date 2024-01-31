#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list<int> l1;

    for(int i = 0; i < 5 ; i++)
    {
        l1.push_back(i*100);
    }
    l1.push_front(10);
    l1.push_back(50);
     for(auto itr:l1)
     {
          cout<<itr<<" ";
     }
     cout<<endl;
     l1.reverse();
    for(auto itr:l1)
     {
          cout<<itr<<" ";
     }
     cout<<endl;
     l1.sort();
     for(auto itr:l1)
     {
          cout<<itr<<" ";
     }
     l1.pop_front();
     cout<<endl;
     for(auto itr:l1)
     {
          cout<<itr<<" ";
     }
     cout<<endl;
     l1.pop_back();
     for(auto itr:l1)
     {
          cout<<itr<<" ";
     }
     l1.remove(200);
     l1.insert(l1.begin(),200);
    
     cout<<endl;
      for(auto itr:l1)
     {
          cout<<itr<<" ";
     }
    cout<<"\nFront Element "<<l1.front()<<endl;

    // list<int>::iterator x;

    // for( x = l1.begin(); x != l1.end() ; x++)
    // {
    //     cout<<*x<<" ";
    // }

    return 0;
}
