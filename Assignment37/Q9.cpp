//9. Write a program to Push and print elements in a float vector
#include<iostream>
#include<algorithm>
#include<tuple>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    float value,size;
    vector<float> x;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>value;
        x.push_back(value);
    }
    cout<<endl;
    vector<float>::iterator z;
    z=x.begin();
    for(int i=0;i<x.size();i++)
    {
        cout<<z[i]<<" ";
    }
    return 0;
}
