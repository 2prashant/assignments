#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int>v;
    for(int i = 0 ; i < 5 ; i++)
       v.push_back(i*100);

    for(int i = 0 ; i < v.size() ; i++)
        cout<<v[i]<<" ";
        cout<<endl;
    v.pop_back();
    v.pop_back();
     for(int i=0;i<v.size();i++)
     {
         cout<<v[i]<<" ";
     }
     cout<<endl;
    cout<<"size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity();
    

    return 0;
}