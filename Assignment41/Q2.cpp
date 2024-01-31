//2. Create a stack of int type, and find the top most element in a stack.
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    int size;
    cout<<"Enter stack size=";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    cout<<"Top most element in stack="<<s.top()<<endl;
}