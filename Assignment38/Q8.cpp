/*

8. Remove all occurrences of an element and remove set of some specific from the list
C++ STL

*/

// #include<iostream>
// #include<list>
// #include<iterator>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     list<int> l1;
//     int size,value;
//     cout<<"Enter size : ";
//     cin>>size;
//     for(int i=0;i<size;i++)
//     {
//         cin>>value;
//         l1.push_back(value);
//     }
//    l1.erase(unique(l1.begin(),l1.end()),l1.end());
//     for(auto itr:l1)
//     {
//         cout<<itr<<" ";
//     }

// }



#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {2,1, 2, 3, 4, 5, 2, 6, 7, 2, 8};

    // Remove all occurrences of a specific element (e.g., 2)
    int element_to_remove = 2;
    vec.erase(std::remove(vec.begin(), vec.end(), element_to_remove), vec.end());

    // Remove a set of specific elements (e.g., 3 and 5)
    // std::vector<int> elements_to_remove = {3, 5};
    // vec.erase(std::remove_if(vec.begin(), vec.end(), [&elements_to_remove](int x) {
    //     return std::find(elements_to_remove.begin(), elements_to_remove.end(), x) != elements_to_remove.end();
    // }), vec.end());

    // Print the modified vector
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
