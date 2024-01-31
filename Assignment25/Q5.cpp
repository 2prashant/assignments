/*
5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class.
*/
#include<iostream>
using namespace std;
class reversenum
{
    private:
        int num;
        int rev;
    public:
          void set(int x)
          {
              num=x;
          }
          int getN()
          {
              return num;
          }
      void reverse()
      {
        while(num!=0)
        {
            int temp;
            temp=num%10;
            num=num/10;
            cout<<temp;
        }
      }
};
int main()
{
    class reversenum obj;
    obj.set(4381);
    cout<<"number="<<obj.getN();
    cout<<"\nRverse order";
    obj.reverse();
    return 0;
}

