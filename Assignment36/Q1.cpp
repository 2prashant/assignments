/*                        //STL: array

1. Using STL Array gets and sets a reference to an element based on a given index.
*/
#include<iostream>
#include<array>
using namespace std;
class arr
{
    private :
            array <int,10> ar;
    public:
            void sets()
            {
                for(int i=0;i<ar.size();i++)
                {
                    cin>>ar.at(i);
                }
            }
            void gets()
            {
                for(int i=0; i<ar.size();i++)
                {
                    cout<<ar.at(i)<<" ";
                }
            }
         
};
int main()
{
    arr a1;
    a1.sets();
    a1.gets();
    return 0;
}