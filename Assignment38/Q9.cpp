// // // 9. Remove all consecutive duplicate elements from the list | C++ STL.
//#include<bits/stdc++.h>
// #include<iostream>
// #include<list>
// #include<iterator>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     list<int> l1;
//     int size,value;
//     cout<<"Enter size of list : ";
//     cin>>size;
//     for(int i=0;i<size;i++)
//     {
//         cin>>value;
//         l1.push_back(value);
//     }
//     l1.erase(unique(l1.begin(),l1.end()),l1.end());
//     for(auto itr:l1)
//     {
//         cout<<itr<<" ";
//     }
    
// }


#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6,89,5,6};

    // Remove consecutive duplicate elements
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

    // Print the modified vector
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}


