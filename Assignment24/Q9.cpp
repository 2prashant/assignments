/*
9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.
*/
#include<iostream>
using namespace std;
void max(int num1,int num2)
{
    if(num1>num2)
    {
        cout<<"max number="<<num1;
    }
    else
    cout<<"max number="<<num2;
}
void max(float num1,float num2)
{
    if(num1>num2)
    cout<<"max num="<<num1;
    else
    cout<<"max number="<<num2;
}
int main()
{
    float num1,num2;
    cout<<"Enter two number";
    cin>>num1>>num2;
    max(num1,num2);
    return 0;

}
