// 2. C++ Program to Print all triplets in sorted array that form AP(or Arithmetic
// Progression) Example..Input : arr[] = { 2, 6, 9, 12, 17, 22, 31, 32, 35, 42 };
// Output :
// 6 9 12
// 2 12 22
// 12 17 22
// 2 17 32
// 12 22 32
// 9 22 35
// 2 22 42
// 22 32 42

#include<iostream>
#include<unordered_set>
#include<iterator>
#include<algorithm>
#include<algorithm>
using namespace std;
void printAPtriplets(int arr[] ,int n)
{
    unordered_set<int> unset;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int diff=arr[j]-arr[i];
            if(unset.find(arr[i]-diff)!=unset.end() )
            {
                cout<<arr[i]-diff<<" "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
            unset.insert(arr[i]);
    }
}
int main()
{
   int arr[] = { 2, 6, 9, 12, 17, 22, 31, 32, 35, 42 };
    int size=sizeof(arr)/sizeof(arr[0]);
    printAPtriplets(arr,size);
    return 0;

}
