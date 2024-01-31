// 4. Create a map, and insert some pairs and find one pair out of the inserted pair and
// replace it with another pair and print map.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int> mymap;
    mymap.insert(pair<string,int>("pras",1));
    mymap.insert(pair<string,int>("qwe",2));
    mymap.insert(pair<string,int>("asd",34));
    // map<string,int>::iterator itr;;
    // for(itr=mymap.begin();itr!=mymap.end();itr++)
    // {
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }

    for(auto itr:mymap)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    if(mymap.count("qwe"))
    {
         mymap.erase("qwe");
         mymap.insert(pair<string,int>("qwe",90));
    }
    else
    {
        mymap.insert(pair<string,int>("qwe",90)); 
    }
     cout<<endl;
    for(auto itr:mymap)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }
    return 0;

}