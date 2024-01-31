// 3. Returns a reverse iterator which points to the position before the beginning of the
// deque (which is considered its reverse end).

#include<iostream>
#include<iterator>
#include<deque>
using namespace  std;
deque<int> reverse(deque<int> dq,int size)
{
    deque<int> dq2;
    deque<int>::reverse_iterator itr=dq.rbegin();
    while(itr!=dq.rend())
    {
        dq2.push_back(*itr);
        itr++;
    }
    return dq2;
}
int main()
{
    deque<int> dq;
    int size,value;
    cout<<"Size:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>value;
        dq.push_back(value);
    }
    auto dq3=reverse(dq,size);
    for(auto itr:dq3)
    {
       cout<<itr<<" ";
    }
    
    return 0;
}