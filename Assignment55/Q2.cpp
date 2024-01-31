/*
 Given an expression string x. Examine whether the pairs and the orders of
“{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for
exp = “[(])”.
*/
#include<bits/stdc++.h>
#include<iostream>


using namespace std;
unordered_map<char,int> symbole={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
bool balance(string s)
{
    stack<char> st;
    for(char bracket:s)
    {
        if(symbole[bracket]<0)
        {
             st.push(bracket);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            char top=st.top();
            st.pop();
            if(symbole[top]+symbole[bracket]!=0)
            {
                 return false;
            }
        }
        if(st.empty())
        {
            return true;
        }
        else
        return false;
    }
}
int main()
{
    string str;
    cin>>str;
    cout<<balance(str);

}