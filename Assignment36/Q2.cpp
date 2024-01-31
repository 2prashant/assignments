//2. Using STL Array returns the total number of elements in the array.
#include<iostream>
#include<array>
using namespace std;
class arr
{
    private:
             array <int,10>ar;
    public:
          int count=0;
          int  sets()
          {
               for(int i=0;i<ar.size();i++)     
               {
                   cin>>ar.at(i);
                   count++;
               }
               return ar.size();  
          }
};
int main()
{
    arr a1;
    cout<<a1.sets();
}

