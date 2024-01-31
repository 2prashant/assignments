/*

                               Member function, static, constructor
1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
*/
#include<iostream>
using namespace std;
class complex
{
    private:
          int a,b;
    public:
        void setdata(int x, int y)
        {
            a=x;
            b=y;
        }
        void showdata()
        {
            cout<<"real="<<a<<" "<<"img="<<b<<endl;
        }
        complex operator+(complex c)
        {
            complex temp;
              temp.a=a+c.a;
              temp.b=b+c.b;
              return temp;
        }
        complex add(complex c)
        {
             complex temp;
              temp.a=a+c.a;
              temp.b=b+c.b;
              return temp;
        }

};
int main()
{
     complex obj1,obj2,obj3;
     obj1.setdata(5,8);
     obj2.setdata(6,9);
  //   obj3=obj1+obj2;
      obj3=obj1.add(obj2);
     obj1.showdata();
     obj2.showdata();
     obj3.showdata();
     return 0;
}