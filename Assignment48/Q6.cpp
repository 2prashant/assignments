// 6. Write a program to find some key value pairs and print on the console.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    multimap<int,int> map1;
    map1.insert(pair<int,int>(1,10));
    map1.insert(pair<int,int>(2,20));
    map1.insert(pair<int,int>(3,30));
    map1.insert(pair<int,int>(4,40));
    for(const auto&pair: map1)
    {
        cout<<"key : "<<pair.first<<" value : "<<pair.second<<endl;
    }
    cout<<"Find element in key value pair"<<endl;
    auto it=map1.find(2);
    cout<<" key : "<<it->first<<" value : "<<it->second<<endl;


}






#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> multiMap;

    // Insert some key-value pairs into the multimap
    multiMap.insert(std::make_pair(1, "One"));
    multiMap.insert(std::make_pair(2, "Two"));
    multiMap.insert(std::make_pair(3, "Three"));
    multiMap.insert(std::make_pair(2, "Another Two"));
    multiMap.insert(std::make_pair(4, "Four"));

    // Key-value pairs to search for
    int target_key = 2;
    std::string target_value = "Two";

    // Find and print key-value pairs with the specified key and value
    std::cout << "Key-value pairs with key=" << target_key << " and value='" << target_value << "':" << std::endl;
    for (auto it = multiMap.begin(); it != multiMap.end(); ++it) {
        if (it->first == target_key && it->second == target_value) {
            std::cout << it->first << ": " << it->second << std::endl;
        }
    }

    return 0;
}
