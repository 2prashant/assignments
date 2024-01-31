/*
4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.
*/
#include<iostream>
using namespace std;
class largnum
{
     private:
          int num1,num2,num3;
          int largest;
    public:
          void set(int x, int y, int z)
          {
               num1=x;
               num2=y;
               num3=z;
          }
          int largestnum()
          {
              return largest;
          }
       void largenum()
       {
         cout<<num1<<" "<<num2<<" "<<num3<<" ";
          if(num1>num2)
          {
            if(num1>num3)
            {
                largest=num1;
            }
          }
          if(num1<num2)
          {
            if(num2>num3)
            {
                largest=num2;
            }
            else
            {
                largest=num3;
            }
          }

       }
        
    
};
int main()
{
    class largnum num1,num2;
    num1.set(3,6,8);
    num2.set(45,67,887);
    num1.largenum();
    num2.largenum();
    cout<<"\nLargest number="<<num1.largestnum()<<endl;
    cout<<"\nLargest number="<<num2.largestnum()<<endl;
    return 0;
}
