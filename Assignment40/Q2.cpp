

// 2. Returns a reverse iterator which points to the last element of the deque (i.e., its
// reverse beginning).

#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
deque<int> reverse(deque<int> dq)
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
    cout<<"enter size:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>value;
        dq.push_back(value);
    }
    auto itr=reverse(dq);
    for(auto itr2:itr)
    {
        cout<<itr2<<" ";
    }
}