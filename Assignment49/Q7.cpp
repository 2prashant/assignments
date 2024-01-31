// 7. Given an array of strings arr[] of size N, the task is to print all the distinct strings
// present in the given array.
// Examples:
// Input: arr[] = { “Good”, “God”, “Good”, “God”, “god” }
// Output: god Good God

#include<iostream>
#include<unordered_set>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
void  distinctstrings(vector<string>v,int size)
{
    unordered_set<string> str;
    for(int i=0;i<size;i++)
    {
        if(!str.count(v[i]));
        {
            str.insert(v[i]);
        }
    }
    for(auto itr:str)
    {
        cout<<itr<<" ";
    }
    
}
int main()
{
     string arr[] = {"Good","God","Good","God","god"};
     vector<string> v={"Good","God","Good","God","god"};
     int size=v.size();
     distinctstrings(v,size);
     return 0;
}