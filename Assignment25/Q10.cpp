/*
10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc
*/
#include<iostream>
using namespace std;
class Area
{
    private:
         int num1,num2;
    public:
         void area()
         {
            float num1,num2;
            cout<<" area of circle \n Enter  of radius=";
            cin>>num1;
             float temp1=3.14*num1*num1;
             cout<<temp1<<endl;

             cout<<"area of sequare\n Enter length=";
             cin>>num1;
             float temp2=num1*num1;
             cout<<"Area="<<temp2<<endl;

             cout<<"area of rectangle\n Enter base & hight";
             cin>>num1>>num2;
             float temp3=num1*num2;
             cout<<"Area="<<temp3<<endl;

         }

};
int main()
{
    class Area areanum;
    areanum.area();
    return 0;
}
