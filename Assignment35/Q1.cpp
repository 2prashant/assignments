                      //Templates
/*
1. Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates.
*/
#include<iostream>
using namespace std;
template <class t1, class t2, class t3>
// template <typename T>
t1 addition(t2 x, t3 y)
{
    return x+y;
}
// t1 multiple(t2 p, t3 q)
// {
//     return p*q;
// }
int main()
{
     cout<<addition<int,float,float>(4.6,5.0)<<endl;
    // cout<<multiple<float>(5.7,6.0)<<endl;
    // cout<<multiple<float,float,float>(5.7,6.0)<<endl;
}