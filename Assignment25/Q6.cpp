/*
6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.
*/
#include<iostream>
using namespace std;
int temp=0;
class square
{
    private :
         int num;
         int count;
    public :
           
         int  seqnum()
         {
             int num;
             cout<<"Enter number=";
             cin>>num;
             temp=num*num;
             cout<<"Sequare of number=";
             cout<<temp<<endl;
         }
         int countfunc()
         {
            int count=0;
            while(temp!=0)
            {
                int temp1;
                {
                   temp1=temp%10;
                   temp=temp/10;
                   count++;
                }
            }
             return count;
         }
        
};
int main()
{
    class square seq;
     seq.seqnum();
     cout<<"Count of number=";
     cout<<seq.countfunc();
     return 0;   
}
