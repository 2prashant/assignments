/*
3. Create a stack, and implement main operations like push(), pop(), peek(), empty()
and size().
*/
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> x;
    int size;
    cout<<"Enter stack size=";
    cin>>size;
    // push operation
    for(int i=0;i<size;i++)
    {
        int s;
        cin>>s;
        x.push(s);
    }
    cout<<"Size of stack="<<x.size()<<endl;
    // pop operation
    for(int i=0;i<size;i++)
    {
        cout<<x.top()<<" ";
        x.pop();
    }
    // stack is empty or not
    if(x.empty()==true)
    {
        cout<<"Stack is  empty"<<endl;
    }
    if(x.empty()==false)
    {
        cout<<"Stack is not empty"<<endl;
    }
     for(int i=0;i<size;i++)
    {
        int s;
        cin>>s;
        x.push(s);
    }
    if(x.empty()==true)
    {
        cout<<"Stack is  empty"<<endl;
    }
    if(x.empty()==false)
    {
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Size of stack="<<x.size()<<endl;
}
