// 3. C++ Program for Number of unique triplets whose XOR is zero.
// Input : a[] = {1, 3, 5, 10, 14, 15};
// Output : 2
// Explanation : {1, 14, 15} and {5, 10, 15} are the
// unique triplets whose XOR is 0.
// {1, 14, 15} and all other combinations of
// 1, 14, 15 are considered as 1 only.
// Input : a[] = {4, 7, 5, 8, 3, 9};
// Output : 1
// Explanation : {4, 7, 3} is the only triplet whose XOR is 0
#include<iostream>
#include<unordered_set>
#include<iterator>
#include<algorithm>
using namespace std;
int counttriplets(int a[],int size)
{
    unordered_set<int> s;
    for(int i=0;i<size;i++)
    {
        s.insert(a[i]);
    }
    int count=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            int xr=a[i]^a[j];
            if(s.find(xr)!=s.end() && xr!=a[i] && xr!=a[j])
            {
                count++;
            }
        
        }
    }
    return count/3;
}
int main()
{
    int a[]={1, 3, 5, 10, 14, 15};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<counttriplets(a,size);
    return 0;
}