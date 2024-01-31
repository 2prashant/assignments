/*
7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.
*/
#include<iostream>
using namespace std;
class Box
{
    private:
         float len,breadth,height;
    public:
         Box(float l, float b, float h)
         {
            len=l;
            breadth=b;
            height=h;         
         }
          float calculate()
         {
            float vol=len*breadth*height;
            return vol;
         }

};
int main()
{
    Box B1(4,5.6,6.1);
    cout<<"volume of BOX="<<B1.calculate();
    return 0;

}
