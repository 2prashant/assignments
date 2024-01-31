/*
                                 Classes and Objects
1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number
*/
#include<iostream>
using namespace std;
class complex
{
     private:
          int real;
           int img;
    public:
           void set(int x, int y)
           {
               real=x;
                img=y;
           }
           void print()
           {
               cout<<"complex number"<<real<<"+"<<img<<"i"<<endl;
           }
};
int main()
{
      complex c1;
      c1.set(3,5);
      c1.print();
      return 0;
}

