//7. Write a program to find sum of vector elements.
#include <bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{
    vector<int> v={23,45,1,7,5};
    cout<<"sum="<<accumulate(v.begin(), v.end(), 0);

    return 0;
}
