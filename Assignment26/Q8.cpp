/*
8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.
*/
#include<iostream>
using namespace std;
class Bank
{
    private:
          float princ,rate;
          int year;
          float SI;
          float total;
    public:
         Bank(float p, float r, int y)
         {
             princ=p;
             rate=r;
             year=y;
         }
         float interestrate()
         {
               SI=princ*(rate/100)*year;
               return SI;
         }
         float totalbalance()
         {
              total=princ+SI;
              return total;
         }

};
int main()
{
    Bank per1(234.0,4.0,2);
    cout<<" total interstrate ="<<per1.interestrate()<<endl;
    cout<<"TOtal balance="<<per1.totalbalance()<<endl;
    return 0;

}
