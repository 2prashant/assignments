// friend function & opertaor overloading
#include<iostream>
using namespace std;
class complex
{
    private:
       int a,b;
    public :
      void setdata(int x ,int y)
      {
           a=x;
           b=y;
      }
      void showdata()
      {
        cout<<"Real="<<a<<" img="<<b<<endl;
      }
      friend complex operator+(complex , complex);
      friend complex operator-(complex , complex); 
      friend complex operator-(complex c);
};
complex operator+(complex x, complex y)
{
    complex temp;
    temp.a=x.a+y.a;
    temp.b=x.b+y.b;
    return temp;
}
complex operator-(complex x, complex y)
{
    complex temp;
    temp.a=x.a-y.a;
    temp.b=x.b-y.b;
    return temp;
}
complex operator-(complex x)
{
    complex temp;
    temp.a=-x.a;
    temp.b=-x.b;
    return temp;
}
int main()
{
     complex c1,c2,c3,c4;
     c1.setdata(3,4);
     c2.setdata(5,8);
     c3=c1+c2;
     c4=c1-c2;
     c1.showdata();
     c2.showdata();
     c3.showdata();
     c4.showdata();
     c4=-c3;
     c4.showdata();
     cout<<endl;
    return 0;
}
