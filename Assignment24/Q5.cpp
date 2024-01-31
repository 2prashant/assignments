//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
void fibonacci(int num)
{
    int flag=0;
    int first=1,second=2;
   // cout<<"0 1 1 2 ";
    for(int i=1;i<num;i++)
    {
        int  res=first+second;
         first=second;
         second=res;
         if(num==res)
         {
            flag++;
         }
       //  cout<<res<<" ";
    }
    if(flag!=0)
    {
        cout<<"\nthis number is exit in fibonacci series";
    }
    else
    {
        cout<<"\n this number does not exit in fibonacci series";
    }


}
int main()
{
    int num;
    cout<<"Enter number=";
    cin>>num;
    fibonacci(num);
    return 0;
}

