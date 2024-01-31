#include<iostream>
using namespace std;
class dollor;
class Ruppy
{
    float R;
   public:
      Ruppy()
      {
          cout<<"Default constructor"<<endl;
      }
      Ruppy(float x)
      { 
          cout<<"Parameateries constructor"<<endl;
           R=x;  
      }
      int getR()
      {
          return R;
      }
       void display()
      {
          cout<<"Ruppy="<<R<<endl;
      }
      operator float()
      {
           cout<<"int operator type cast"<<endl;
           return R;
      }
      operator dollor();
};
class dollor
{
    private:
           
        int  D;
    public:
          dollor()
          {
              cout<<"Default constructor"<<endl;
          }
          dollor(int   d)
          {
             cout<<"paramerties constructor"<<endl;
              D=d;
          }
          dollor(Ruppy r)
          {
             cout<<"Dollor constructor called"<<endl;
              D=(r.getR()/100);
              
          }
          void display()
          {
              cout<<"Dollor="<<D<<endl;
          }
          operator int()
          {
              cout<<"type casting in float"<<endl;
              return D;
          }
          operator Ruppy()
          {
              cout<<"Ruppy type casting"<<endl;
              return D*100;
          }

};
int main()
{
    int x=567;
    Ruppy r=56;
    x=r;
    r.display();
    cout<<x<<endl<<endl;;

    dollor d;
    int  y=78;
     d=y;
     d.display();

     int z=6876;
     z=d;
     d.display();
     cout<<z<<endl<<endl;
     
     r=d;
     r.display();
     cout<<endl<<endl;

     d=(dollor)r;
     r.display();
    return 0;
}