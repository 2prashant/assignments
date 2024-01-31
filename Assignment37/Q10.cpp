//10. Write a program to check whether an element exists in a vector or not.
#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<tuple>
using namespace std;
int main()
{
      int value;
      vector<int> x={12,2,6,54,34,23,9,8};
      cout<<"Enter element=";
      cin>>value;
      cout<<endl;
      int flag=0;
     vector<int>::iterator itr=find(x.begin(),x.end(),value);
     if(itr!=x.end())
     {
        cout<<"Value is exist"<<endl;
        cout<<"Element at position"<<itr-x.begin()+1<<endl;
     }
     else
     {
        cout<<"Value is not found"<<endl;
     }
      return 0;
}
