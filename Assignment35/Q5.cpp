//5. Write a C++ Program to Add two numbers using function template.
#include<iostream>
using namespace std;
template<class t1, class t2, class t3>
t1 add(t2 x,t3 y)
{
      return x+y;
}
int main()
{
    cout<<add<int,int,int>(7,8)<<endl;
    cout<<add<float,float,float>(9.7,9.7)<<endl;
}