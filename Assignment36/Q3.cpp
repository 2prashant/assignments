//3. Find the first and last element using the STL array.
#include<iostream>
#include<array>
using namespace std;
class arr
{
     private:
             array <int,6>ar;
     public:
             void set()
             {
                for(int i=0;i<ar.size();i++)
                {
                    cin>>ar.at(i);
                }
                cout<<"First element="<<ar.front()<<endl;
                cout<<"Last element"<<ar.back()<<endl;
             }
};
int main()
{
    arr a1;
    a1.set();
    return 0;
}
