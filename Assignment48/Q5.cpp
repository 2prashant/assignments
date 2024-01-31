// // 5. Write a program to erase only a single value based on position.
#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
    multimap<int,int> map1;
    map1.insert(pair<int,int>(1,10));
    map1.insert(pair<int,int>(2,20));
    map1.insert(pair<int,int>(3,30));
    map1.insert(pair<int,int>(4,40));
    multimap<int,int>::iterator itr;
    for(itr=map1.begin();itr!=map1.end();itr++)
    {
        cout<<"Key : "<<itr->first<<" value : "<<itr->second<<endl;
       
    }
    cout<<"====================================="<<endl;
    int position_to_erase=3;
    if(position_to_erase>0 && position_to_erase<=map1.size())
    {
        auto it=map1.begin();
        advance(it,position_to_erase-1);
        map1.erase(it);
    }
    else
    {
        cout<<"\n Invalid Position to erase"<<endl;
    }
    for(const auto&pair:map1)
    {
        cout<<"Key : "<<pair.first<<" value : "<<pair.second<<endl;
    }
    
   
}




// #include <iostream>
// #include <map>

// int main() {
//     std::multimap<int, std::string> multiMap;

//     // Insert some sample values into the multimap
//     multiMap.insert(std::make_pair(1, "One"));
//     multiMap.insert(std::make_pair(2, "Two"));
//     multiMap.insert(std::make_pair(3, "Three"));
//     multiMap.insert(std::make_pair(2, "Another Two"));
//     multiMap.insert(std::make_pair(4, "Four"));

//     // Display the multimap before erasing
//     std::cout << "Multimap before erasing:" << std::endl;
//     for (const auto& pair : multiMap) {
//         std::cout << pair.first << ": " << pair.second << std::endl;
//     }

//     // Erase the element at a specific position (1-based index)
//     int position_to_erase = 3; // Erase the third element

//     if (position_to_erase > 0 && position_to_erase <= multiMap.size()) {
//         auto it = multiMap.begin();
//         std::advance(it, position_to_erase - 1); // Move the iterator to the desired position
//         multiMap.erase(it); // Erase the element at the specified position
//     } else {
//         std::cout << "Invalid position to erase." << std::endl;
//     }

//     // Display the multimap after erasing
//     std::cout << "\nMultimap after erasing:" << std::endl;
//     for (const auto& pair : multiMap) {
//         std::cout << pair.first << ": " << pair.second << std::endl;
//     }

//     return 0;
// }
