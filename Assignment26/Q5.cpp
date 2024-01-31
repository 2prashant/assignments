/*
5. Define a class Date and write a program to Display Date and initialise date object
using Constructors.
*/
#include<iostream>
using namespace std;
class Date
{
    private:
          int d,m,s;
    public:
        Date(int x,int y, int z)
        {
            d=x;
            m=y;
            s=z;
            
        }
         void showdata()
         {
              cout<<"Date="<<d<<" month="<<m<<" year="<<s<<endl;
         }
};
int main()
{
    Date d1(2,3,2020);
    d1.showdata();
    return 0;

}