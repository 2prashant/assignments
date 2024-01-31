/*
5. Create stack1 of int type, and create another stack of the same type with name
stack2 and copy all the elements of stack1 into stack2 in the same order.
*/
#include<iostream>
#include<stack>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    stack<int> s1;
    stack<int> s2;
    int size;
    cout<<"Enter stack size=";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        s1.push(x);
    }
    s2.swap(s1);
    cout<<"Copy element in second element"<<endl;
    for(int i=s2.size();i>=-1;i--)
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
}
