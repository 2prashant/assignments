//8. Create a function to search the element in the set.
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
     set<int> s;
     s.insert(10);
     s.insert(20);
     s.insert(30);
     s.insert(40);
     s.count(10);

     auto pos=s.find(30);
     if(pos!=s.end())
     {
        cout<<"Element found "<<endl;
     }
     else
     {
         cout<<"Element not found "<<endl;
     }
      
       set<int> s1;
       s1.insert(10);
       s1.insert(20);
       s1.insert(30);
       s1.insert(40);
       s1.insert(50);
       s1.insert(60);
       
       auto pos1=s1.find(70);
       if(pos1==s1.end())
       {
          cout<<"element not found"<<endl;
       }
       else 
       {
         cout<<"element found "<<endl;
       }
       return 0;
     

}
