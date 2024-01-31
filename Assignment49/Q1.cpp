// unordered_set

// 1. Count of distinct pair sums in a given Array arr[] of size N, the task is to find the total
// number of unique pair sums possible from the array elements.


#include<iostream>
#include<unordered_set>
#include<utility>
#include<vector>
using namespace std;

int cntdispairs(vector<int>arr,int target)
{
    unordered_set<int> set;
    unordered_set<int> seen;

    int count=0;
    for(int num:arr)
    {
        if(set.find(target-num)!=set.end() && seen.find(num)==seen.end())
        {
            count++;
            seen.insert(num);
            seen.insert(target-num);  
        }
        set.insert(num);
    }
    return count;
}
int main()
{
    vector<int> arr={8, 7, 6, 5, 4, 3, 2, 1};
    int k=6;
    cout<<cntdispairs(arr,k);
    return 0;
}


// 1st method
// int count(int arr[],int n)
// {
//     unordered_set<int> s;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//               s.insert(arr[i]+arr[j]);
//         }
//     }
//     return s.size();
// };
// int main()
// {
   
            
//     int arr[]={8, 7, 6, 5, 4, 3, 2, 1};
//     int size=sizeof(arr)/sizeof(int);
//      cout<<"size:"<<count(arr,size);

    
// }

// #include<bits/stdc++.h>
// #include<unordered_set>
// using namespace std;
// int main()
// {
//     unordered_set<string> stringSet;
//     stringSet.insert("code");
//     stringSet.insert("in");
//     stringSet.insert("c++");
//     stringSet.insert("is");
//     stringSet.insert("fast");
//     string key="slow";
//     unordered_set<string>::iterator itr;
//     for(itr=stringSet.begin();itr!=stringSet.end();itr++)
//     {
//         cout<<*itr<<" ";
//     }
//     cout<<endl;
//     if(stringSet.find(key)==stringSet.end())
//     {
//         cout<<key<<" not found "<<endl;
//     }
//     else
//     {
//         cout<<"found "<<key<<endl;
//     }

//     int arr[]={1,5,2,1,4,3,1,7,2,8,9,5};
    
//     int n=sizeof(arr)/sizeof(int);
//     unordered_set<int> inSet;
//     unordered_set<int> duplicate;
//     for(int i=0;i<n;i++)
//     {
//         if(inSet.find(arr[i])==inSet.end())
//         {
//             inSet.insert(arr[i]);
//         }
//         else{
//             duplicate.insert(arr[i]);
//         }
//     }
//     cout<<"Occurrences of 1: "<<duplicate.count(1)<<endl;
//     cout<<" size: "<<duplicate.size()<<endl;
//         cout<<"Duplicate item are : ";
//         unordered_set<int>::iterator itr1;
//         for(itr1=duplicate.begin();itr1!=duplicate.end();itr1++)
//         {
//             cout<<*itr1<<" ";
//         }
    

// }