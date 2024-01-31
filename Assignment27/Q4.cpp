/*
4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
Output -
*/
#include<iostream>
using namespace std;
class Time
{
    int hour;
    int min;
    int sec;

   public:
       void settime(int h, int m, int s)
       {
           hour=h;
           min=m;
           sec=s;
       }
        friend int operator== (Time p1, Time p2);
        friend ostream&  operator<<(ostream &os, Time T);
        friend istream& operator>>(istream &is, Time &T);
        void timenormalis()
        {
              min=min+(sec/60);
              sec=sec%60;
              hour=hour+(min/60);
              min=min%60;
              
        }
        void dispaly()
        {
            cout<<"Hour ="<<hour<<"  Enter minute ="<<min<<"  Enter seconed="<<sec<<endl;
        }
};
int operator== (Time p1, Time p2)
        {
           if((p1.hour==p2.hour) && (p1.min==p2.min) && (p1.sec==p2.sec))  
           {
               return 1;
           }
           else
           {
              return 0;
           }
           
        }
ostream& operator<<(ostream &os, Time T)
{
        
        {
            cout<<"Hour ="<<T.hour<<" minute ="<<T.min<<" seconed="<<T.sec<<endl;
        }
        return cout;
}
istream& operator>>(istream &is , Time &t )
{
    cout<<"Hour=";
    is>>t.hour;
    cout<<"minute=";
    is>>t.min;
    cout<<" seconed";
    is>>t.sec;
    return is;
}
int main()
{
    Time f1,f2,f4,f5;
    int x,y;
    f1.settime(29,120,78);
    f2.settime(24,87,98);
    f1.timenormalis();
    f2.timenormalis();
    f1.dispaly();
    f2.dispaly();
    x=(f1==f2);
    if(x==1)
    {
        cout<<"Same time"<<endl;
    }
    else
    {
        cout<<"Not same time"<<endl;
    }
    cin>>f4>>f5;
    f4.timenormalis();
    f5.timenormalis();
    cout<<f4<<f5;
     y=(f4==f5);
    if(y==1)
    {
        cout<<"Same time"<<endl;
    }
    else
    {
        cout<<"Not same time"<<endl;
    }
    return 0;
}
