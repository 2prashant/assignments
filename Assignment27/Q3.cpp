/*
3. Write a C++ program to add two complex numbers using operator overloaded by a
friend function.
*/
#include<iostream>
using namespace std;
class number
{
    int num1,num2;
    public:
       void getvalue(int x, int y)
       {
            num1=x;
            num2=y;
       }
       void display()
       {
           cout<<num1<<" "<<num2<<endl;
       }
       friend  number operator+(number X, number Y);
};
number operator+(number X, number Y)
{
     number temp;
      temp.num1=X.num1+Y.num1;
      temp.num2=X.num2+Y.num2;
      return temp;
}
int main()
{
    number obj1,obj2,obj3;
    obj1.getvalue(4,8);
    obj2.getvalue(9,56);
    obj1.display();
    obj2.display();
    obj3=obj1+obj2;
    obj3.display();

}
