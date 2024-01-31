// 2. Declare a multimap m1 of key-value pairs of integer type and then insert some pair
// type data. Now print the multimap values of m1, and also create another multimap
// m2 of the same type as m1 using m1.begin() and m1.end() as parameters.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    multimap<string,int> map1;
    map1.insert(pair<string,int>("one",1));
    map1.insert(pair<string,int>("two",2));
    map1.insert(pair<string,int>("three",3));
    map1.insert(pair<string,int>("four",4));
    multimap<string,int>::iterator itr;
    for(itr=map1.begin();itr!=map1.end();itr++)
    {
        cout<<"key:"<<itr->first<<"  value:"<<itr->second<<endl;
    }
    multimap<string,int> map2(map1.begin(),map1.end());
    multimap<string,int>::iterator itr2;
    for(itr2=map2.begin();itr2!=map2.end();itr2++)
    {
        cout<<"key : "<<(*itr2).first<<" valuev: "<<(*itr2).second<<endl;
    }

}