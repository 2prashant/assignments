/*
5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.
*/
#include<iostream>
using namespace std;
class Numbers
{
      private:
             int x,y,z;
      public:
            Numbers()
            {

            }
            Numbers(int a, int b, int c)
            {
                  x=a;
                  y=b;
                  z=c;
            }
           Numbers operator--(int )//post decreament
            {
                 Numbers temp;
                 temp.x=x--;
                 temp.y=y--;
                 temp.z=z--;
                 return temp;
            }
            Numbers operator--()//pre decreament
            {
                 Numbers temp;
                 temp.x=--x;
                 temp.y=--y;
                 temp.z=--z;
                 return temp;

            }
            Numbers operator-()
            {
                Numbers temp;
                temp.x=-(x);
                temp.y=-(y);
                temp.z=-(z);
               return temp;
            }
            void display()
            {
                   cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl; 
            }
};
int main()
{
    Numbers a(34,56,78);
     a.display();
    (a--).display(); //post decreament
    (--a).display();// pre decreament
    (-a).display();
    return 0;
}
   

