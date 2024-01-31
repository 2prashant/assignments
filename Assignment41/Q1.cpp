/*
                                      Stack
1. Create a stack of int type, push 5 elements in it and print it on the console screen.
*/
#include<iostream>
#include<stack>
#include<iterator>
using namespace std;
int main()
{
    stack<int> x;
    x.push(5);
    x.push(6);
    x.push(1);
    x.push(2);
    x.push(3);
    while(!x.empty())
    {
        cout<<x.top()<<" ";
        x.pop();
    }
    return 0;

}