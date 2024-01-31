//9. Write a C++ Program to Perform Simple Addition Function Using Templates.
#include<iostream>
using namespace std;
template<class T1,class T2,class T3>

T3 add(T1 x, T2 y)
{
    return x+y;
}
template<class t1, class t2, class t3>
t1 largnum(t2 x, t3 y)
{
    return (x>y?x:y);
}
int main()
{
    float sum1= add <float,int,float> (3.6,7);
     cout<<largnum<int,int,int>(5,7)<<endl;
    cout<<"\n Sum="<<sum1;

}

