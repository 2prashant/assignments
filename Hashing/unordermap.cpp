#include<iostream>
#include<unordered_map>
#include<iterator>
using namespace std;
int main()
{
    unordered_map<string,int> umap;
    umap["prince"]=44;
    umap["gfg"]=56;
    umap["helloworld"]=90;

    // for(auto x:umap)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    for(auto itr=umap.begin();itr!=umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    string key="prince";
    if(umap.find(key)!=umap.end())
    {
        cout<<"key found"<<endl;
    }
    else
    {
         cout<<"Key is not found"<<endl;
    }


    if(umap.find(key)!=umap.end())
    {
        auto temp=umap.find(key);
        cout<<"key is : "<<temp->first<<endl;
        cout<<"value is "<<temp->second<<endl;
    }

    umap.insert(make_pair("mobile",1700));
    for(auto itr=umap.begin();itr!=umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    key="helloworld";
    umap.erase(key);
    for(auto itr=umap.begin(); itr!=umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<umap.size()<<endl;

    int arr[]={1,111,1,11,111,11,1,2,2,2,222,222,22,33,33,33,3,3,3,4,44,44,4,5,55,55,555};
    unordered_map<int,int> umaped;
    for(int i=0;i<15;i++)
    {
        int key=arr[i];
        umaped[key]++;
    }

    for(auto itr=umaped.begin(); itr!=umaped.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

}