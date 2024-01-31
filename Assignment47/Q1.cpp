// Pair and Tuple

// 1. Given an array of pairs arr[] of size N (N ≥ 3) where each element of pair is at most N
// and each pair is unique, the task is to determine the number of ways to select triplets
// from the given N pairs that satisfy at least one of the following conditions:
// 1. The first value (a) of each pair should be distinct.
// 2. The second value (b) of each pair should be distinct.



#include<bits/stdc++.h>
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int,char> pair1;
    pair1.first=100;
    pair1.second='G';
    cout<<pair1.first<<" ";
    cout<<pair1.second<<endl;

    //==============================
    pair<string,double>pair3("GeeksForGeeks",1.23);
    cout<<pair3.first<<" ";
    cout<<pair3.second<<endl;

    //============================
    pair<int,double>pair4;
    pair<string,char>pair5;
    cout<<pair4.first;
    cout<<pair4.second<<endl;
    
    cout<<pair5.first;//NULL
    cout<<pair5.second;//NULL

    //===================================
    //Member Functions
    //make pair => pair3=make_pair("data_type","Data_Type");
    pair<int,char> pair6;
    pair<string,double>pair7("GeeksForGeeks",1.23);
    pair<string,double>pair8;

    pair6.first=100;
    pair6.second='G';

    pair8=make_pair("GeeksForGeeks is Best",4.56);
    cout<<"Pair6 : "<<pair6.first<<" "<<pair6.second<<endl;
    cout<<"pair7 : "<<pair7.first<<" "<<pair7.second<<endl;
    cout<<"pair8 : "<<pair8.first<<" "<<pair8.second<<endl;

    //========================================
    //Swap=> pair1.swap(pair2);
     
     pair<char,int>pair9=make_pair('A',1);
     pair<char,int>pair10=make_pair('b',2);
     cout<<"Before Swapping:\n";
     cout<<"Contents of pair1= "<<pair9.first<<" "<<pair9.second<<endl;
     cout<<"Contents of Pair2= "<<pair10.first<<" "<<pair10.second<<endl;
     pair9.swap(pair10);
     cout<<"\nAfter Swapping:\n";
     cout<<"Contents of pair1 = "<<pair9.first<<" "<<pair9.second<<endl;
     cout<<"Contents of pair2 = "<<pair10.first<<" "<<pair10.second<<endl;


      //==========================================
     //tie() 
     pair<int,int> pair11={1,2};
     int a,b;
     tie(a,b)=pair11;
     cout<<"\n"<<a<<" "<<b<<"\n";
     pair<int,int> pair12={3,4};
     tie(a,ignore)=pair12;


     pair<int,pair<int,char>> pair13={3,{4,'a'}};
     int x,y;
     char z;
     tie(x,ignore)=pair13;
     tie(y,z)=pair13.second;
     cout<<x<<" "<<y<<" "<<z<<" \n";
 cout<<"======================================"<<endl;
    //==========================================
    //tuple
    tuple<char,int,float> geek;
    geek=make_tuple('a',10,15.5);
    cout<<"The initial values of tuple are : ";
    cout<<get<0>(geek)<<" "<<get<1>(geek)<<" "<<get<2>(geek)<<endl;
    get<0>(geek)='b';
    get<2>(geek)=20.5;

    cout<<"The modified values of tuple are : ";
    cout<<get<0>(geek)<<" "<<get<1>(geek)<<" "<<get<2>(geek)<<endl;

    //========================
    //tuple size => tuple_size<decltype>(geek)>::value
 
     tuple<char,int,float> geek1(20,'g',17.5);
     cout<<"Size : "<<tuple_size<decltype(geek)>::value<<endl;

    //==========================================
   //tuple_cat()
   tuple<int,char,float>tup1(20,'g',17.5);
   tuple<int,char,float>tup2(30,'f',10.5);
   auto tup3=tuple_cat(tup1,tup2);
   cout<<"\nThe new tuple element in order are : ";
   cout<<get<0>(tup3)<<" "<<get<1>(tup3)<<" "<<get<2>(tup3)<<" "<<get<3>(tup3)<<" "<<get<4>(tup3)<<" "<<get<5>(tup3)<<" ";



    return 0;
}