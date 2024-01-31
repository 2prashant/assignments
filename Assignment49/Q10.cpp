// 10. Unordered_set operators in C++ STL(== and !=)
#include<iostream>
#include<unordered_set>
#include<iterator>
using namespace std;
int main()
{
    unordered_set<int> arr1={1,2,3,4,5};
    unordered_set<int> arr2={1,2,3,4,5};
    unordered_set<int> arr3={1,2,3,4,5,6};
    if(arr1==arr2)
    {
        cout<<"arr1 and arr2 are same"<<endl;
    }
    else
    {
        cout<<"arr1 and arr2 are not same"<<endl;
    }
    if(arr2==arr3)
    {
        cout<<"arr2 and arr3 are same"<<endl;
    }
    else
    {
        cout<<"arr2 and arr3 are not same"<<endl;
    }
     if(arr2!=arr3)
    {
        cout<<"arr2 and arr3 are not same"<<endl;
    }
    else
    {
        cout<<"arr2 and arr3 are  same"<<endl;
    }
    return 0;

}