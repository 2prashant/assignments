//5. Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    float L,H,B;
    cout<<"Enter cubid length,Hight,Base=";
    cin>>L>>H>>B;
     float vol=L*H*B;
    cout<<"volume of a cuboid"<<vol;
    return 0;
}
