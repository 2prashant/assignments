//5. Find largest and smallest elements in a vector
#include<iostream>
#include<vector>
#include<iterator>
#include<tuple>
#include<algorithm>
using namespace std;
int main()
{
    int value,size;
    cout<<"Enter array size=";
    cin>>size;
    vector<int> x;
    for(int i=0;i<size;i++)
    {
        cin>>value;
        x.push_back(value);
    }
    vector<int>::iterator z;
    z=x.begin();
    for(int i=0;i<x.size();i++)
    {
        cout<<z[i]<<" ";
    }
    cout<<endl;
    int max=*max_element(x.begin(),x.end());
    cout<<"max element in vector "<<max<<endl;
    int min=*min_element(x.begin(),x.end());
    cout<<"Minmum element in array "<<min<<endl;
    cout<<endl;
    cout<<"Element are sorted"<<endl;
    sort(x.begin(),x.end());
    for(auto v:x)
    {
        cout<<v<<" ";
    }
    return 0;

}
