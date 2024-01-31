/*
2. Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables.
*/
#include<iostream>
using namespace std;
class Complex
{
    private:
           int real=0;
           int img=0;
    public:
             void setdata(int real, int img)
             {r
                  *this->real=real;
                  *this->img=real;
             }
             void display()
             {
                  cout<<"real "<<real<<" img"<<img<<endl;
             }

};
int main()
{
    Complex a1;
    a1.setdata(2,3);
    a1.display();
    return 0;
}