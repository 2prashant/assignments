// 5. Create a map, insert some pairs and Find the occurrence of each pair and print it on
// the screen.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<int,string> mymap;
    mymap.insert(pair<int,string>(1,"one"));
    mymap.insert(pair<int,string>(2,"two"));
    mymap.insert(pair<int,string>(3,"four"));
    mymap.insert(pair<int,string>(1,"one"));
    mymap.insert(pair<int,string>(2,"two"));
    

    map<pair<int,string>,int> occurencemap;
    for(const auto &pair:mymap)
    {
       occurencemap[{pair.first,pair.second}]++;
    }
    for(const auto &occurenece:occurencemap)
    {
        cout<<"Key : "<<occurenece.first.first<<" "<<" value : "<<occurenece.first.second<<"-occurences : "<<occurenece.second<<endl;
    }
    return 0;
}




// #include <iostream>
// #include <map>

// int main() {
//     // Create a map of key-value pairs
//     std::map<int, std::string> myMap;

//     // Insert some pairs into the map
//     myMap[1] = "One";
//     myMap[2] = "Two";
//     myMap[3] = "Three";
//     myMap[4] = "Two"; // Duplicate value
//     myMap[5] = "One"; // Duplicate value

//     // Create a map to store pair occurrences
//     std::map<std::pair<int, std::string>, int> occurrenceMap;

//     // Count the occurrences of each pair in the original map
//     for (const auto& pair : myMap) {
//         occurrenceMap[{pair.first, pair.second}]++;
//     }

//     // Print the occurrences
//     std::cout << "Occurrences of each pair:" << std::endl;
//     for (const auto& occurrence : occurrenceMap) {
//         std::cout << "Key: " << occurrence.first.first << ", Value: " << occurrence.first.second << " - Occurrences: " << occurrence.second << std::endl;
//     }

//     return 0;
// }
