//4. Checks whether the set is empty or not.if it is empty insert 5 elements in the set
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int> s;
     int value;
    if(s.empty())
    {
        cout<<"Set is empty"<<endl;
        cout<<"insert element in set:"<<endl;
        for(int i=0;i<5;i++)
         {
          cin>>value;
          s.insert(value);
         }
        for(auto itr=s.begin();itr!=s.end();itr++)
        {
            cout<<*itr<<" ";
        }
    }
    else{
        cout<<"Set is not empty"<<endl;
    }
   
}
