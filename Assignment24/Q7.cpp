//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int addnum(int num1, int num2, int num3=0);
int main()
{
    int num1,num2,num3,sum=0;
    cout<<"add 2 or 3 numbers"<<endl;
    cin>>num1>>num2;
    cout<<"sum="<<addnum(num1,num2);
    cin>>num1>>num2>>num3;
    cout<<"sum="<< addnum(num1,num2,num3);
    return 0;  
}
int addnum(int num1, int num2, int num3)
{
   int sum=num1+num2+num3;
   return sum;
}
