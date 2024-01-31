/*
10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.
*/
#include<iostream>
using namespace std;
class staticCount
{
     private:
        static int x;
    public:
        void funcall()
        {
            x++;
        }
        int getvalue()
        {
            return x;
        }
        void display()
        {
            cout<<x<<" ";
        }
};
int  staticCount::x;
int main()
{
    staticCount obj1;
     obj1.funcall();
     obj1.funcall();
     obj1.funcall();
     obj1.display();
     return 0;
};