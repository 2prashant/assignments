/*
2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)
*/
#include<iostream>
using namespace std;
class time
{
     private:
           int h,m,s;
     public:
           void setTime(int x,int y,int z)
           {
                 h=x;
                 m=y;
                 s=z;
           }
           void showTime()
           {
                cout<<"Hour="<<h<<" minute="<<m<<" second="<<s<<endl;
           }
           void normalize()
           {
                      m=m+s/60;
                      s=s%60;
                      h=h+m/60;
                      m=m%60;   
           }
           time add(time time3 )
           {
                time temp;
                temp.h=h+time3.h;
                temp.m=m+time3.m;
                temp.s=s+time3.s;
                return temp;

           }
};
int main()
{
    time obj1,obj2,obj3;
    obj1.setTime(4,57,56);
    obj2.setTime(4,57,67);
    obj1.normalize();
    obj2.normalize();
    obj3=obj1.add(obj2);
    obj3.normalize();
    obj1.showTime();
    obj2.showTime();
    obj3.showTime();
    return 0;
}
