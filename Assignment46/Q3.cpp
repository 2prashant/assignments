
// 3. Create a map, insert some pairs and print all elements in reverse order using rbegin
// and rend function.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int> map1;
    map1.insert(pair<string,int>("pras",1));
    map1.insert(pair<string,int>("qwe",2));
    map1.insert(pair<string,int>("mkmdk",3));
    map1.insert(pair<string,int>("mdsk",56));
    map1["mdkad"]=990;
    // map<string,int>::iterator itr;
    for(auto itr=map1.rbegin();itr!=map1.rend();itr++)
    {
        cout<<"key : "<<itr->first<<" value : "<<itr->second<<endl;
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
//     myMap[4] = "Four";
//     myMap[5] = "Five";

//     // Print all elements in reverse order using rbegin and rend
//     std::cout << "Elements in reverse order:" << std::endl;
//     for (auto it = myMap.rbegin(); it != myMap.rend(); ++it) {
//         std::cout << it->first << ": " << it->second << std::endl;
//     }

//     return 0;
// }
