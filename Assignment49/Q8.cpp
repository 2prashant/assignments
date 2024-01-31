// 8. Find all matrix elements which are minimum in their row and maximum in their
// column
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
#include<iterator>
using namespace std;
vector<int> minmaxNumber(vector<vector<int>>matrix, vector<int>&ans)
{
    unordered_set<int> set;
    for(int i=0;i<matrix.size();i++)
    {
        int minr=INT_MAX;
        for(int j=0;j<matrix[i].size();j++)
        {
            minr=min(minr,matrix[i][j]);
        }
        set.insert(minr);
    }
    for(int j=0;j<matrix[0].size();j++)
    {
        int maxr=INT_MIN;
        for(int i=0;i<matrix.size();i++)
        {
            maxr=max(maxr,matrix[i][j]);
        }
        if(set.find(maxr)!=set.end())
        {
            ans.push_back(maxr);
        }
    }
    return ans;
}
int main()
{
     vector<vector<int>> mat={
        {1,10,4},
        {9,3,8},
        {15,16,17}
     };
     vector<int> ans;
     minmaxNumber(mat,ans);
     if(ans.size()==0)
     {
        cout<<"-1"<<endl;
     }
     for(int i=0;i<ans.size();i++)
     {
        cout<<ans[i]<<endl;
     }
     return 0;
}
