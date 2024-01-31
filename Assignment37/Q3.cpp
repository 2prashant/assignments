//3. Write a function to print the element of a vector and take input from the user.
#include<iostream>
#include<vector>
#include<tuple>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int size,value;
    cout<<"Enter vector size=";
    cin>>size;
    vector<int> x;
    for(int i=0; i<size;i++)
    {
        cin>>value;
        x.push_back(value);
    }
    // first approach
    vector<int>::iterator z;
    z=x.begin();
    for(int i=0;i<x.size();i++)
    {
        cout<<z[i]<<" ";
    }
    cout<<endl;
    //second approach
    for(auto z=x.rbegin();z!=x.rend();z++)
    {
        cout<<*z<<" ";
    }
}
