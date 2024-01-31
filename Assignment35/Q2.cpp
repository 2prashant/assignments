//2. Write a C++ Program to find Largest among two numbers using function template.
#include<iostream>
using namespace std;
template<class t1, class t2, class t3>
t1 largnum(t2 x, t3 y)
{
    return (x>y?x:y);
}
int main()
{
    cout<<"Largest number"<<endl;
    cout<<largnum<int,int,int>(5,7)<<endl;
    cout<<largnum<char,char,char>('a','z')<<endl;
    cout<<largnum<float,float,float>(4.7,-3.5)<<endl;
    return 0;
}