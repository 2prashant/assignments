//3. Write a c++ program to find freq of every word using unordered_map.
#include<iostream>
#include<unordered_map>
#include<iterator>
#include<algorithm>
using namespace std;
void printfrequency(string s)
{
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])==m.end())
        {
            m.insert(make_pair(s[i],1));
        }
        else
        {
            m[s[i]]++;
        }
    }
    for(auto &it:m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}
int main()
{
    string str="Partaek Jain";
    printfrequency(str);
    return 0;
}
