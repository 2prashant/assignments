8. You are given the string S . Compress the string when lower and upper cases are the
same. In compressed string characters should be in lowercase.
Example 1:
Input: S = "aaABBb"
Output: "3a3b"
Explanation: As 'a' appears 3 times consecutively and 'b' also 3 times, and 'b' and 'B'
are considered the same.
Example 2:
Input: S = "aaacca"
Output: "3a2c1a"
Explanation: As 'a' appears 3 times consecutively and 'c' also 2 times, and then 'a' 1
time.

// solve on GFG
#include<stack>
#include<iostream>
using namespace std;
string countcharacter(string str)
{
    stack<int> s;
    s.
}
int main()
{
    string S="aaABBb";
    cout<<countcharacter(S);
    return 0;
}