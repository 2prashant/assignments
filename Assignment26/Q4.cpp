//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter
{
  private:
       static int  count;
    public:
        Counter()
        {
            cout<<"Constructor called\n";
            count++;
        }
      void showCounter()
           {
                cout<<count;
           }
          ~Counter()
          {
            cout<<"deconstructor called\n";
          }
};
int Counter:: count;
int main()
{
     Counter c1,c2,c3;
     c1.showCounter();

}
