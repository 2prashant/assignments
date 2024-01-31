//4. Returns the element from the given index using the STL array.
#include<iostream>
#include<array>
using namespace std;
class arr
{
     private:
            array <int,6> ar;
     public:
           void setdata()
           {
               for(int i=0; i<ar.size();i++)
               {
                   cin>>ar.at(i);
               }
           }
           int getvalue(int i)
           {
                return ar[i];
           }
};
int main()
{

    arr a1;
    int index;
    a1.setdata();
    cout<<"Returns the element from the given index"<<endl;
    cout<<"Enter index=";
    cin>>index;
    cout<<"Element="<<a1.getvalue(index);
    return 0;
}