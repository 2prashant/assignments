// 5. C++ Program to given an array of positive and negative numbers, find if there is a
// subarray (of size at-least one) with 0 sum.
// Examples :
// Input: {4, 2, -3, 1, 6}
// Output: true
// Explanation:
// There is a subarray with zero sum from index 1 to 3.
// There is a subarray with zero sum from index 1 to 3.
// Input: {4, 2, 0, 1, 6}
// Output: true
// Explanation:
// There is a subarray with zero sum from index 2 to 2.

#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
bool subArrayExist(int arr[],int n)
{
    unordered_set<int> sumset;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0|| sumset.find(sum)!=sumset.end())
        {
            for(auto it:sumset)
            {
                cout<<it<<" ";
            }
            return true;
        }
        sumset.insert(sum);
    }
    return false;
}
int main()
{
    int arr[]={4, 2, 0, 1, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(subArrayExist(arr,n))
    {
        cout<<"found a subArray with 0 sum"<<endl;
    }
    else
    {
        cout<<" No sunch Sub Array Exist"<<endl;
    }
    return 0;
}