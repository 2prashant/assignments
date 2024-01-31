//6. How to find the lower bound of any desired element from the set.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(70);
    s.insert(50);
    s.insert(60);
    for(auto itr=s.begin();itr!=s.end();itr++)
    {
        cout<<*itr<<" ";
    }
     cout<<endl;
     cout<<"Lower bound "<<*s.lower_bound(50)<<endl;
     cout<<"Upper bound "<<*s.upper_bound(50)<<endl;
    

}
