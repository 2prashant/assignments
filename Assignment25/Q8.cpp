/*
8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.
*/
#include<iostream>
using namespace std;
class rectangle
{
    private:
         float num1,num2;
    public:
        float area()
        {
            float num1,num2;
            cout<<"Find area of the rectangle\n enter base & hight=";
            cin>>num1>>num2;
            cout<<"area of the rectangle=";
            return (num1*num2);
        }

};
int main()
{
    class rectangle num;
    cout<<num.area();
   return 0;
}

