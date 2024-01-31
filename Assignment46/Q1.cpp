// map

// 1. Create a map, insert at least 5 pairs of keys and values and print it.
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
//     map<string,int> m;
//     m["one"]=1;
//     m["two"]=2;
//     m["three"]=3;
//     map<string , int>::iterator itr;
//     for(itr=m.begin();itr!=m.end();itr++)
//     {
//             cout<<"key :"<<itr->first<<" value : "<<itr->second<<endl;
//     }
   
//     map<string,int> m1;
//     m1["one"]=1;
//     m1["two"]=2;
//     m1["three"]=3;
//     map<string,int>::iterator itr1=m1.begin();
//    while(itr1!=m1.end())
//    {
//       cout<<"key : "<<itr1->first<<" value : "<<itr1->second<<endl;
//       itr1++;
//    }
   


   map<int,int> map1;
   map1.insert(pair<int,int>(1,13));
   map1.insert(pair<int,int>(1,40));
   map1.insert(pair<int,int>(2,30));
   map1.insert(pair<int,int>(10,30));
   map1.insert(pair<int,int>(3,60));
   map1.insert(pair<int,int>(4,20));
   map1.insert(pair<int,int>(5,50));
   map1.insert(pair<int,int>(6,80));
   map1[7]=10;

//    cout<<"count:"<<map1.count(2)<<endl; // key

//    //    fiirst method
    map<int,int>::iterator itr3;
//    for(itr3=map1.begin();itr3!=map1.end();itr3++)
//    {
//        cout<<"key : "<<itr3->first<<" value : "<<itr3->second<<endl;

//    }

//    // upper bound && lower bound
//    cout<<"lower bound (5)=>"<<map1.lower_bound(5)->second<<endl;
//    cout<<"upper bound(5)=>"<<map1.upper_bound(5)->second<<endl;

  // second method
//    map<int,int>::iterator itr3;
//    for(itr3=map1.begin();itr3!=map1.end();itr3++)
//    {
//        cout<<"key : "<<(*itr3).first<<" value : "<<(*itr3).second<<endl;

//    }

//       // third method
//       for(auto itr3:map1)
//       {
//         cout<<"key : "<<itr3.first<<" value : "<<itr3.second<<endl;
//       }

//    //   method 4 
//       for(auto &itr3:map1)
//       {
//         cout<<"key : "<<itr3.first<<" value : "<<itr3.second<<endl;
//       }

      cout<<"\nmap4\n";
      map<int,int> map4(map1.begin(),map1.end());
      for(itr3=map4.begin();itr3!=map4.end();itr3++)
      {
          cout<<" key : "<<itr3->first<<" value : "<<itr3->second<<endl;
      }
      //

       cout<<"max size : "<<map4.max_size();
       

      //
      cout<<"\nsize : "<<map4.size()<<endl;
      auto it=map4.find(5);
      if(it==map4.end())
      {
         cout<<"NO value"<<endl;
      }
      else
      {

          cout<<"key : "<<(*it).first<<" value : "<<(*it).second<<endl;
      }


      // delection 
      auto itr4=map4.find(5);
      if(itr4!=map4.end())
      {
          map4.erase(itr4);
      }
      for(itr3=map4.begin();itr3!=map4.end();itr3++)
      {
          cout<<" key : "<<itr3->first<<" value : "<<itr3->second<<endl;
      }

      //  remove all element less then 3
      cout<<"\n remove all element less then 3"<<endl;
      map4.erase(map4.begin(),map4.find(4));
      for(itr3=map4.begin();itr3!=map4.end();itr3++)
      {
          cout<<" key : "<<itr3->first<<" value : "<<itr3->second<<endl;
      }

      map4.erase(map4.begin(),map4.end());
      for(itr3=map4.begin();itr3!=map4.end();itr3++)
      {
          cout<<" key : "<<itr3->first<<" value : "<<itr3->second<<endl;
      }
      cout<<"size : "<<map4.size();
       
     map<string,int> map5;
     int n;
     cout<<"size : ";
     cin>>n;
     string str;
     for(int i=0;i<n;i++)
     {
        cin>>str;
        map5[str]++;
     }
     for(auto itr10:map5)
     {
        cout<<itr10.first<<"=>"<<itr10.second<<endl;
     }

    return 0;
}