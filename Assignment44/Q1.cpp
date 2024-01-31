// 1. Find the total number of elements of the set container.
#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int> x;
    cout<<"\n size of set x : "<<x.size()<<endl;
    x.insert(12);
    x.insert(50);
    x.insert(5);
    x.insert(1);
    x.insert(30);
    x.insert(3);
    x.insert(6);
    for(auto itr=x.begin();itr!=x.end();itr++)
    {
        cout<<*itr<<" ";
    }

    cout<<"\nSize of set x : "<<x.size()<<endl;

    cout<<"Lower bound"<<*x.lower_bound(7)<<endl;
    cout<<"Upper bound"<<*x.upper_bound(6)<<endl;

    
    cout<<endl;
    set<int,greater<int>> x1;
    x1.insert(90);
    x1.insert(9);
    x1.insert(80);
    x1.insert(70);
    x1.insert(7);
    x1.insert(60);
    x1.insert(6);

    for(auto itr1=x1.begin();itr1!=x1.end();itr1++)
    {
        cout<<*itr1<<" ";
    }
    cout<<"\nSize of set x1:"<<x1.size()<<endl;

   set<int> s3(x.begin(),x.end());
   set<int>::iterator itr3;
   for(itr3=s3.begin();itr3!=s3.end();itr3++)
   {
       cout<<*itr3<<" ";
   }
   cout<<endl;

   int num;
   num=s3.erase(12);
   cout<<num<<" deleted"<<endl;
   for(itr3=s3.begin();itr3!=s3.end();itr3++)
   {
       cout<<*itr3<<" ";
   }
   cout<<endl;
   cout<<s3.erase(30)<<endl;
   for(itr3=s3.begin();itr3!=s3.end();itr3++)
   {
       cout<<*itr3<<" ";
   }


   // Lower bound
   // in Array
   cout<<"=================================="<<endl;
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr=lower_bound(a,a+n,5);
    if(ptr==(a+n))
    {
        cout<<"Not found"<<endl;
        return 0;
    }
    cout<<(*ptr)<<endl;
   // end




    return 0;
}