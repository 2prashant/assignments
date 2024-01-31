//2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int highestvalue(int num);
int main()
{
    int num;
    cout<<"Find highest digit \n Enter number";
    cin>>num;
    highestvalue(num);
    return 0;
}
int  highestvalue(int num)
{
    int temp1=-6,temp2,temp;
    while(num!=0)
    {
       int digit;
       digit=num%10;
       num=num/10;
       temp=digit;
       if(temp1<temp)
       {
            temp2=temp;
            temp=temp1;
            temp1=temp2;
       }
    }
    cout<<"Highest digit="<<temp1<<endl;
}
//M2
/*
#include<iostream>
using namespace std;
int highval (int num)
{
    int high=-1;
    while(num)
    {
      if(high<num%10)
      {
        high=num%10;
      }
        num=num/10;
      
    }
    return high;
}
int main()
{
     int x;
    cout<<"Enter number=";
    cin>>x;
    cout<<"Highest number="<<highval(x);
    return 0;
}

*/