/*

4. Iterate a list in reverse order C++ STL

*/
#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int> l1;
    int size;
    cout<<"Enter list size : ";
    cin>>size;
    int value;
    for(int i=0;i<size;i++)
    {
          cin>>value;
          l1.push_back(value);
    }
    for(auto itr=l1.rbegin();itr!=l1.rend();itr++)
    {
        cout<<*itr<<" ";
    }

}