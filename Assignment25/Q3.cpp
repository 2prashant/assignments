/*
3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class.
*/
#include<iostream>
using namespace std;
class factorial
{
   private: 
          int num;
          int fact;
    public:
          void set(int x)
          {
             num=x;
          }
          int get()
          {
              return num;
          }
          int getfact()
          {
              return fact;
          }
         void  factcalcult()
         { 
              int f=1;
              for(int i=num;i>=1;i--)
              {
                   f=f*i;
              }
              fact=f;
         }

};
int main()
{
    class factorial num1,num2;
    num1.set(5);
    num2.set(6);
    num1.factcalcult();
    num2.factcalcult();
    cout<<"factorial "<<num1.get()<<" is "<<num1.getfact()<<endl;;
    cout<<"factorial "<<num2.get()<<" is "<<num2.getfact()<<endl;;
    return 0;
}
