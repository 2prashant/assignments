/*
9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.
*/
#include<iostream>
using namespace std;
class Bill
{
    private:
            int unit;
            float rupee;
    public:
    int x;
         void set(int U)
         {
            unit=U;
           x=unit;
         }
        void Get()
         {
                cout<<"Unit="<<x<<"\n Bill="<<rupee<<endl;
         }
          void calculatebill()
         {
              float b1=0,b2=0,b3=0;
              if(unit>=0 && unit>=100)
              {
                if(unit>0 && unit<=100)
                {
                      b1=unit*1.20;
                      rupee=b1;
                }
                    b1=100*1.20;
                    unit=unit-100;
              }
              if(unit>100 && unit<=200)
              {
                   b2=200*2;
                   unit=unit-200;
              }
              if(unit>200)
              {
                  b3=unit*3;
              }
              rupee=b1+b2+b3;
         }
};
int main()
{
      Bill p1;
      p1.set(520);
      p1.calculatebill();
      p1.Get();
      return 0;


}
