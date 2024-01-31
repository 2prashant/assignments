//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube
{
    private:
           int l;
           int vol;
    public:
          Cube(int l)
          {
             cout<<"volume of "<<l<<" is "<<l*l*l<<endl;
          }
};
int main()
{
    Cube obj(4);
    return 0;
}