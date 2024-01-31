//6. Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    float num1,num2,num3,avg;
    cout<<"Enter three number=\n";
    cin>>num1>>num2>>num3;
    avg=(num1+num2+num3)/3.0;
    cout<<"average="<<avg<<endl;
    return 0;
}