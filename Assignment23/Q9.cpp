//9. Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"find maximum of two number\n Enter two number:\n";
    cin>>num1>>num2;
    if(num1>num2)
    {
        cout<<"max number="<<num1;
    }
    else
    {
        cout<<"max number="<<num2;
    }
    return 0;
}