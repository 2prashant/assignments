//3. Write a C++ program to find the largest of three elements using a template.
#include<iostream>
using namespace std;
template <class t1, class t2, class t3, class t4>
t1 largenum(t2 x, t3 y, t4 z)
{
    if(x>y)
    {
         if(x>z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }
    else 
    {
         if(y>z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}
int main()
{
     cout<<"Large number "<<largenum<int,int,int,int>(20,15,)<<endl;
     cout<<"Large number "<<largenum<char,char,char,char>('b','q','v')<<endl;
     return 0;
}