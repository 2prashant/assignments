//8. Remove elements from a container from the specified position or range in deque.
#include<iostream>
#include<deque>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(9);
    dq.push_front(8);
    dq.insert(dq.begin(),{1,2,3,4});
    dq.insert(dq.end(),{1,2,3,4,5,6});
    deque<int>::iterator itr;
    for( itr=dq.begin();itr!=dq.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
   // dq.erase(dq.end());
    // itr++;
    dq.erase(itr.begin(),itr.end());
     for( itr=dq.begin();itr!=dq.end();itr++)
    {
        cout<<*itr<<" ";
    }

    
}