//4. Write a C++ Program to Swap data using function template.
#include<iostream>
using namespace std;
template<class t1 , class t2, class t3=int>
void swap(t1 x, t2 y)
{
     t3 z;
     z=x;
     x=y;
     y=z;
     cout<<x<<" "<<y<<endl;
}
int main()
{
      swap<int,int>(7,9);
      return 0;    
}