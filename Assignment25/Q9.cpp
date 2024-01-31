/*
9. Define a class Circle and define an instance member function to find the area of the
circle.
*/
#include<iostream>
using namespace std;
class circle
{
    private:
          float num;
    public:
         float area()
         {
            int rad;
            cout<<"Enter circle of area=";
            cin>>rad;
            return 3.14*rad*rad;
         }
};
int main()
{
    class circle cirad;
    cout<<cirad.area();
    return 0;
}
