// 6. Create a map, use a member function to tell whether a map is empty or not and then
// insert some pairs into the map and find the size of map.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
         
        map<int,int> mymap;
        int size;
        int key,value;
        if(mymap.empty())
        {
            cout<<"Map is empty "<<endl;
            cout<<"\nEnter size of map : ";
             cin>>size;
            for(int i=0;i<size;i++)
            {
                cout<<"\nEnter key : ";
                cin>>key;
                cout<<"Enter value";
                cin>>value;
                mymap[key]=value;
            }
        }
        else
        {
            cout<<"Map is not empty "<<endl;
        }
        // mymap.insert(pair<int,int>(1,9));
        // mymap.insert(pair<int,int>(2,8));
        // mymap.insert(pair<int,int>(3,7));
        // mymap.insert(pair<int,int>(4,6));
        // mymap.insert(pair<int,int>(5,55));
        for(auto &pair:mymap)
        {
            cout<<"key : "<<pair.first<<" "<<"value : "<<pair.second<<endl;
        }
}
