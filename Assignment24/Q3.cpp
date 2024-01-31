//3. Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int power(int num1,int num2)
{
     int x=1;
     for(int i=num2; i>=1; i--)
     {
        x=x*num1;
     }
     return x;
}
int main()
{
   int x,y;
   cout<<"enter number=";
   cin>>x;
   cout<<"Power=";
   cin>>y;
   cout<<"\nRetsult="<<power(x,y);
   return 0; 
}