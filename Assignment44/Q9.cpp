//9. Converting String into Set in C++ STL

#include<iostream>
#include<iterator>
#include<set>
using namespace std;
int main()
{
     string name="geeksforgeeks" ;
     set<char> my_name(name.begin(),name.end());
     for(auto it:my_name)
     {
        cout<<it<<" ";
     }
     cout<<endl;

      string name1="jayadeep";
      set<char> s1;
      for(int i=0;i<name1.size();i++)
      {
          s1.insert(name1[i]);
      }
      for(auto itr1:s1)
      {
          cout<<itr1<<" ";
      }

     return 0;
}
