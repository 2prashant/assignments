// // 2. Sorting Vector of Pairs by 1st element in ascending and 2nd element in descending.
// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<utility>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     int size,value;
//     cout<<"Enter vector size";
//     cin>>size;
//     for(int i=0;i<size;i++)
//     {
//         cin>>value;
//         v.push_back(value);
//     }
//     pair<int,int> pair1;
//     int max=*max_element(v.begin(),v.end());
//     int min=*min_element(v.begin(),v.end());
//     pair1.first=max;
//     pair1.second=min;
//     cout<<"First element : "<<pair1.first<<endl;
//     cout<<"Second element : "<<pair1.second<<endl;

// }


#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<iterator>
using namespace std;
bool customComparator(const pair<int,double>&a, const pair<int,double>&b)
{
     if(a.first>b.first)
     {
        return true;
     }
     else if(a.first<b.first)
     {
         return false;
     }
     else
     {
        return a.second>b.second;
     }
}
int main()
{
    vector<pair<int,double>> pairvector;
    pairvector.push_back(make_pair(6,-3.5));
    pairvector.push_back(make_pair(3,2.2));
    pairvector.push_back(make_pair(2,3.3));
    pairvector.push_back(make_pair(1,2.2));
    pairvector.push_back(make_pair(3,1.1));
    pairvector.push_back(make_pair(2,2.2));

    cout<<"Original vector of pair "<<endl;
    for(const auto &itr:pairvector)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    cout<<"\n after sort vector of pair "<<endl;
    sort(pairvector.begin(),pairvector.end(),customComparator);

    for(const auto &itr:pairvector)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
}

























// #include <iostream>
// #include <vector>
// #include <algorithm>

// bool customComparator(const std::pair<int, double>& a, const std::pair<int, double>& b) {
//     // Sort by the first element in ascending order
//     if (a.first < b.first) {``
//         return true;
//     } else if (a.first > b.first) {
//         return false;
//     } else {
//         // If the first elements are equal, sort by the second element in descending order
//         return a.second > b.second;
//     }
// }

// int main() {
//     std::vector<std::pair<int, double>> pairVector;

//     pairVector.push_back(std::make_pair(3, 2.2));
//     pairVector.push_back(std::make_pair(2, 3.3));
//     pairVector.push_back(std::make_pair(1, 2.2));
//     pairVector.push_back(std::make_pair(3, 1.1));
//     pairVector.push_back(std::make_pair(2, 2.2));

//     std::cout << "Original vector of pairs:\n";
//     for (const auto& pair : pairVector) {
//         std::cout << "(" << pair.first << ", " << pair.second << ")\n";
//     }

//     // Sort the vector using the custom comparator
//     std::sort(pairVector.begin(), pairVector.end(), customComparator);

//     std::cout << "\nSorted vector of pairs by 1st element in ascending and 2nd element in descending:\n";
//     for (const auto& pair : pairVector) {
//         std::cout << "(" << pair.first << ", " << pair.second << ")\n";
//     }

//     return 0;
// }
