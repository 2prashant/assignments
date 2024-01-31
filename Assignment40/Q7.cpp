// 7. Return the first element and last element of the deque container.
#include<iostream>
#include<iterator>
#include<deque>
using namespace std;
int insert(deque<int> dq)
{
   deque<int>::iterator itr=dq.begin();
   return *itr;

}
int main()
{
     deque<int> dq;
     int value,size;
     cout<<"Enter size:";
     cin>>size;
     for(int i=0;i<size;i++)
     {
           cin>>value;
           dq.push_back(value);
     }
     cout<<"First element : "<<insert(dq);
}
