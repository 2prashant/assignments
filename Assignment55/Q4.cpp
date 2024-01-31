/*

Given a stack, the task is to sort it such that the top of the stack has the greatest
element.
Example 1:
Input:
Stack: 3 2 1
Output: 3 2 1
Example 2:

Input:
Stack: 11 2 32 3 41
Output: 41 32 11 3 2

*/
//completed on GFG
#include<bits/stdc++.h>
#include<iterator>
#include<iostream>
using namespace std;
void sort(stack<int>&s)
{
    int size=s.size();
    int arr[size];
    int i=0;
    while(!s.empty())
    {
        arr[i]=s.top();
        s.pop();
        i++;
    }
     cout<<"Insert element in array\n";
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

     for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                 int temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
            }
        }
    }
    cout<<"\nSort element in array\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<size;i++)
    {
        s.push(arr[i]);
    }
}
int main()
{
    stack<int> s;
    s.push(11);
    s.push(2);
    s.push(32);
    s.push(3);
    s.push(2);
    sort(s);

}
