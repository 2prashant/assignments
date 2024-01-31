//6. Write a C++ Program to find Sum of Array using function template.
#include<iostream>
#include<array>
using namespace std;
//template<class t>
int main()
{
    array<int,7>arr={1,2,3,4,5,6,7};
    int sum=0;
    for(int i=0; i<arr.size();i++)
    {
        sum=sum+arr[i];
    }
    cout<<endl;
    cout<<"Sum="<<sum;

    return 0;

}


