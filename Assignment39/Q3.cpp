//3. Create a forward list insert elements from 1 to 10 and find the sum of elements.
#include<iostream>
#include<iterator>
#include<forward_list>
using namespace std;
int main()
{
      forward_list<int> l1;
      int sum=0;
      l1.push_front(1);
       l1.insert_after(l1.begin(),2);
      l1.emplace_after(l1.begin(),3);
      l1.push_front(4);
       l1.push_front(5);
       l1.push_front(6);
      l1.push_front(7);
       l1.emplace_front(8);
      l1.push_front(9);
      l1.insert_after(l1.begin(),10);
      for(auto itr:l1)
      {
        sum=sum+itr;
        cout<<itr<<" ";
      }
      cout<<"\nsum:"<<sum;

      return 0;
}