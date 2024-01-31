#include<iostream>
using namespace std;
class complex
{
   private:
          int real;
          int img;
  public:
         complex ()
         {
              
         }
        complex(int x)
        {
            real=x;
            img=x;
        }
        void print()
        {
            cout<<"real="<<real<<" img="<<img;
        }
};
int main()
{
    complex x;
    x=5;
    x.print();
    /*
        complex x=5;
        x.print();
    */

    return 0;
}