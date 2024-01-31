      /*
         
                  Operator overloading and friend function
1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class complex
{
      private:
            int a,b;
      public:
           void setdata(int x,int y)
           {
                 a=x;
                 b=y;
           }
           void showdata()
           {
               cout<<"real="<<" "<<a<<"img="<<b<<endl;
           }
           complex operator+(complex c)
           {
              complex temp;
              temp.a=a+c.a;
              temp.b=b+c.b;
              return temp;   
           }
           complex operator-(complex c)
           {
                complex temp;
                temp.a=a-c.a;
                temp.b=b-c.b;
                return temp;
           }
           complex operator*(complex c)
           {
               int x=a*c.a-b*c.b;
               int y=a*c.b+b*c.a;
               complex temp;
               temp.a=x;
               temp.b=y;
               return temp;
           }
           int operator==(complex c)
           {
                 if(a==c.a && b==c.b)
                 {
                   return 1;
                 }
                 else
                 {
                   return 0;
                 }
           }

};
int main()
{
      complex obj1,obj2,obj3,obj4,obj5,obj6;
      obj1.setdata(1,2);
      obj2.setdata(4,5);
      obj3=obj1+obj2;// onj1.addfunct(obj2)
      obj4=obj1-obj2;
      obj5=obj1*obj2;
      obj1.showdata();
      obj2.showdata();
      obj3.showdata();
      obj4.showdata();
      obj5.showdata();
      if((obj1==obj2)==1)
      {
           cout<<"complex value is equal"<<endl; 
      }
      if((obj1==obj2)==0)
      {
          cout<<"complex value is not equal"<<endl;  
      }
      cout<<endl;
}
