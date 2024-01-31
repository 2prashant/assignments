#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<" Addres of the object"<<endl;
        cout<<(int)this;
    }
    

};
int main()
{
    A obj;
    obj.display();
    return 0;
}