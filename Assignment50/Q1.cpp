//unordered_map

//1. Write a c++ program to demonstrate functionality of unordered_map.


#include<iostream>
#include<unordered_map>
using namespace std;
// void printFrequencies(const string &str)
// {
//     unordered_map<string,int> wordFreq;
//     stringstream ss(str);

//     string word;
//     while(ss>>word)
//     wordFreq[word]++;

//     unodered_map<string,int>::iterator p;
//     for(p=wordFreq.begin();p!=worldFreq.end();p++)
//     {
//         cout<<"(" <<p->first<<", "<<p->second<<")\n";
//     }

// }
int main()
{
    unordered_map<string,int> umap;
    umap["GeeksforGeeks"]=10;
    umap["Practice"]=20;
    umap["a"]=1;
    umap["Contribute"]=30;
    // only 
    

    for(auto x:umap)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;

    unordered_map<string,double> umap1={
        {"one",1},
        {"Two",2},
        {"three",3}
    };
    unordered_map<string,double>::iterator itr;
    

    //insert value by using [] operator
    umap1["PI"]=3.14;
    umap1["root2"]=1.1414;
    umap1["root3"]=1.732;


    //inserting value by insert function
    umap1.insert(make_pair("e",2.718));
    umap1.insert(make_pair("f",3.14));
    umap1.insert(pair<string,double>("g",98.45));

    for(itr=umap1.begin();itr!=umap1.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
   cout<<endl<<endl;
    string key="PI";
   if(umap1.find(key)==umap1.end())
   {
      cout<<key<<" not found\n";
   }
   else
   {
      cout<<"Found "<<key<<endl;
   }

   key="lambda";
   if(umap1.find(key)==umap1.end())
   {
      cout<<key<<" not found"<<endl;
   }
   else
   {
      cout<<"key"<<" Found"<<endl;
   }

    cout<<"============================================================="<<endl;
    unordered_map<string,int> s;
    string str="geeks for geeks geeks quiz practice qa for";
   //printFrequencies(str);
   string t="";
   for(int i=0;i<str.length();i++)
   {
         if(str[i]!=' ')
         {
            t+=str[i];
         }
         else
         {
            s[t]++;
            t="";
         }
   }
   for(auto &itr:s)
   {
       cout<<itr.first<<" "<<itr.second<<endl;
   }
    return 0;
}
