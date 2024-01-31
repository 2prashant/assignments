/*
7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes.
*/
#include<iostream>
using namespace std;
class largnum
{
     private:
          int num1,num2,num3;
    public:
       void largenum()
       {
        int num1,num2,num3;
        cin>>num1>>num2>>num3;
          if(num1>num2)
          {
            if(num1>num3)
            {
                cout<<"largest number="<<num1<<endl;
            }
          }
          if(num1<num2)
          {
            if(num2>num3)
            {
                cout<<"Largest number="<<num2<<endl;
            }
            else
            {
                cout<<"Largest number="<<num3<<endl;
            }
          }

       }
        
    
};
int main()
{
    class largnum numl;
    numl.largenum();
    return 0;
}

