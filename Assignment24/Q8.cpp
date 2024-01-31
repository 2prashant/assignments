/*
8 . Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle
*/
#include<iostream>
using namespace std;
float area(int a)
{
    return 3.14*a*a;
}
int area(int a,int b)
{
    return (a*b);     
}
float area(float num1,float num2)
{
    return 0.5*num1*num2;
}
int main()
{
    int r,a,b;
    float num1,num2;
     cout<<"radius of circle=";
     cin>>r;
     cout<<area(r);
     cout<<"\nEnter length rectangle";
     cin>>a>>b;
    cout<<area(a,b);
    cout<<"Enter length traingle";
    cin>>num1>>num2;
    cout<<area(num1,num2);
     return 0;
}
