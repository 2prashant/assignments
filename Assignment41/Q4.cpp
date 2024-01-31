/*
4. Reverse the Words of a String using Stack.
Example:
Input: str = “I Love To Code”
Output: Code To Love I
*/
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> x;
    stack<string> y;
    int size;
    cout<<"Enter String size";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        string s;
        cin>>s;
        x.push(s);
    }
    for(int i=0;i<size;i++)
    {
        cout<<x.top()<<" ";
        x.pop();
    }
   
    
    

}