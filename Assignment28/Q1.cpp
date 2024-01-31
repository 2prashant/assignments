            //Operator Overloading, friend operator and this pointers
/*1. Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator
temp.a=a+c.a;
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
            int real;
            int img;
    public:
            friend istream& operator>>(istream &is, Complex &c)
           {
                cout<<"real=";
                is>>c.real;
                cout<<"Img=";
                is>>c.img;
                return is;
           }
           friend ostream&  operator<<(ostream &os, Complex c)
           {
                os<<"Real="<<c.real<<" img="<<c.img<<endl;
                return os;
           }
           Complex operator+(Complex c)
           {
                Complex temp;
                temp.real=real+c.real;
                temp.img=img+c.img;
                return temp;
           }
};
 int main()
 {
        Complex a1,a2;
        cin>>a1>>a2;
        cout<<a1<<a2;
        Complex a3=a1+a2;
        cout<<a3;
        return 0;
 }

