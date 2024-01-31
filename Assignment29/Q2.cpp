/*
2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}
*/
#include<iostream>
using namespace std;
class complex
{
    private:
          int real;
          int img;
     public:
              complex()
              {

              }
              void setdata(int x, int y)
              {
                  real=x;
                  img=y;
              }
              operator int ()
              {
                  return real;
              }
              operator int()
              {
                  return img;
              }
              cout<<
           
};
int main()
{
     complex c1;
     c1.setdata(3,4);
     int x;
     x=c1;
     cout<<x;
     return 0;
}
