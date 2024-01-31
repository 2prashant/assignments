/*
2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
*/
#include<iostream>
using namespace std;
class time
{
    private:
       int hr;
       int min;
       int sec;
    public:
        void settime()
        {
            cin>>hr>>min>>sec;
        }
        void displaytime()
        {
            cout<<"time="<<hr<<"hr"<<" "<<min<<"min"<<" "<<sec<<"sec"<<endl;
        }
};
int main()
{
    class time T1;
    int hr,min,sec;
    T1.settime();
    T1.displaytime();
    return 0;
}
