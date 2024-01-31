// 2. Create a map, where insert keys and values as string type and integer type
// respectively and print it on the screen.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int> map1;
    map1.insert(pair<string,int>("a",5));
    map1.insert(pair<string,int>("prr",4));
    map1.insert(pair<string,int>("kkm",6));
    map1["kfd"]=7;

    for(auto itr:map1)
    {
        cout<<"key : "<<itr.first<<" value "<<itr.second<<endl;
    }
}