/*                                Functions in C++
1. Define a function to check whether a given number is a Prime number or not.
*/
#include<iostream>
using namespace std;
void primenum(int num);
int main()
{
   int num;
   cout<<"enter positive integer number=";
   cin>>num;
   primenum(num);
   return 0;
}
void primenum(int num)
{
    int flag=0;
   for(int i=2;i<num;i++)
   {
        if(num%i==0)
        {
            flag++;
        }
   }
   if(flag==0)
   {
     cout<<" prime number\n";
   }
   else
   {
    cout<<"NOT prime number\n";
   }
   
}