/*
6. Reverse a string using a stack.
Example:
Input: str = "Reverse me"
Output: em esreveR
*/
#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string in stack";
    getline(cin,str);
    stack<char> charStack;
    for(char ch:str)
    {
          charStack.push(ch);
    }
    string reversestr="";
    while(!charStack.empty())
    {
        reversestr+=charStack.top();
        charStack.pop();
    }
    cout<<reversestr<<" ";
    
    
    
   

    
}
