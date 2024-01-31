// 4. Returns a constant iterator pointing to the first element of the container, that is, the
// iterator cannot be used to modify, only traverse the deque.
#include<iostream>
#include<iterator>
#include<deque>
using namespace std;
  firstele(deque<int> dq,int size)
{
    deque<int>::iterator itr;
    itr=dq.begin();
    return itr;
}
int main()
{
    deque<int> dq;
    int value,size;
    cout<<"size:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>value;
        dq.push_back(value);
    }
    cout<<"first element : "<<firstele(dq,size);
}