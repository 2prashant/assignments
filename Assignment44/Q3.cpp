//3. Erase an element from a set.

#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<string> str;
    str.insert("hisar");
    str.insert("Lucknow");
    str.insert("Kanpur");
    str.insert("varansi");
    for(auto itr=str.begin();itr!=str.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    str.erase("Kanpur");
    str.erase("Lucknow");
   // set<int>::iterator itr1;
    for(auto itr1=str.begin();itr1!=str.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
}
