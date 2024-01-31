//4. Write a program to Copy one vector’s elements to another vector.
#include<iostream>
#include<tuple>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    int size,value;
    vector<int> x;
    vector<int> y;
    cout<<"Enter vector size=";
    cin>>size;
    for(int i=0;i<size;i++)
    {
         cin>>value;
         x.push_back(value);
    }
    cout<<"First array"<<endl;
    vector<int>::iterator z;
    for(auto z=x.begin();z!=x.end();z++)
    {
        cout<<*z<<" ";
    }

    cout<<"\nSecond array"<<endl;
   y.assign(x.begin(),x.end()); //vector<int> y(x);

    vector<int>::iterator m;
    m=y.begin();
    for(int i=0;i<y.size();i++)
    {
        cout<<m[i]<<" ";
    }

}
